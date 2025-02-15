#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() 
{
    FILE *fptr , *tptr ;
    char file_name [20] , tmp[] = "tmp.txt" , str [MAX] ;
    char new_line[MAX] ;
    int line , ctr = 0 ;

    printf ( "\n\n* Enter the name of the file you want to open : " ) ;
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
            perror ( "\n* Error in creating temporary file !  " ) ;
            fclose ( fptr ) ;
            return EXIT_FAILURE ;
        }

    printf ( "\n* Enter the line number you want to replace : " ) ;
    scanf ( " %d" , &line ) ; 

    printf ( "\n* Enter the content of the new line : " ) ;
    scanf ( " %[^\n]" , new_line ) ;

    while ( fgets ( str , MAX , fptr ) != NULL ) 
        { 
            ctr ++ ; 
            if ( ctr == line ) 
                {
                    fputs ( new_line , tptr ) ;  
                    fputc ( '\n' , tptr ) ;
                } 
            else
                fputs ( str , tptr ) ; 
        }

    fclose ( fptr ) ; 
    fclose ( tptr ) ;
 
    remove ( file_name ) ; 		
    rename ( tmp , file_name ) ; 
    
    printf ( "\n\n* Replacement was successful ! \n\n " ) ;
    return 0 ;
}