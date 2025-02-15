


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


int main () 
{
    FILE *fptr , *tptr ;
    char file_name [20] , tmp [] = "tmp.txt" , str [MAX] ;
    int line , ctr = 0 ;

    printf ( "\n\n* Give me the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name ) ; 

    fptr = fopen ( file_name , "r" ) ;
    if ( fptr == NULL ) 
        {
            perror ( "\n* Error in opening file ! " ) ;
            return EXIT_FAILURE ;
        }

    tptr = fopen ( tmp , "w" ) ;
    if ( tptr == NULL ) 
        {
            perror ( "\n* Error in creating temporary file ! " ) ;
            fclose ( fptr ) ;
            return EXIT_FAILURE ;
        }

    printf ( "\n* Give me the line you want to remove : " ) ;
    scanf ( " %d" , &line ) ;  

    while ( fgets ( str , MAX , fptr ) != NULL ) 
        { 
            ctr ++ ; 
            if ( ctr != line )  fputs ( str , tptr ) ;
        }

    fclose ( fptr ) ; 
    fclose ( tptr ) ;

    remove ( file_name ) ; 		
    rename ( tmp , file_name ) ; 

    fptr = fopen ( file_name , "r" ) ;  
    if ( fptr == NULL ) 
        {
            perror ( "\n* Error in opening modified file ! " ) ;
            return EXIT_FAILURE ;
        }

    while ( fgets ( str , MAX , fptr ) != NULL )  printf ( " %s" , str ) ;
        
    fclose ( fptr ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}