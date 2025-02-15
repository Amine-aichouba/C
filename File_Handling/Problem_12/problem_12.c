


#include <stdio.h>
#include <stdlib.h>


int main ()
{
    char first_file [20] , second_file [20] , str [100] , new_file [20] ;
    FILE *first_fptr , *second_fptr , *new_fptr ;


    printf ( "\n\n* Enter the first file name : " ) ;
    scanf ( " %s" , first_file ) ; 

    printf ( "\n* Enter the second file name : " ) ;
    scanf ( " %s" , second_file ) ;

    printf ( "\n* Enter the new file name where to merge the above two files : " ) ; 
    scanf ( " %s" , new_file ) ;


    first_fptr = fopen ( first_file , "r" ) ;
    if ( first_fptr == NULL ) 
        {
            perror ( "\n* Error in opening file ! " ) ;
            return EXIT_FAILURE ;
        }
    

    second_fptr = fopen ( second_file , "r" ) ;
    if ( second_fptr == NULL ) 
        {
            perror ( "\n* Error in opening file ! " ) ;
            return EXIT_FAILURE ;
        }


    new_fptr = fopen ( new_file , "w" ) ;
    if ( new_fptr == NULL ) 
        {
            perror ( "\n* Error in creating temporary file !  " ) ;
            fclose ( first_fptr ) ; 
            fclose ( second_fptr ) ;
            return EXIT_FAILURE ;
        }


    while ( fgets ( str , sizeof ( str ) , first_fptr ) != NULL )  fputs ( str , new_fptr ) ;
    while ( fgets ( str , sizeof ( str ) , second_fptr ) != NULL )  fputs ( str , new_fptr ) ;    
        
    fclose ( first_fptr ) ;
    fclose ( second_fptr ) ;
    fclose ( new_fptr ) ;

    new_fptr = fopen ( new_file , "r" ) ;
    if ( new_fptr == NULL ) 
        {
            perror ( "\n* Error in opening file ! " ) ;
            return EXIT_FAILURE ;
        }

    printf ( "\n\n* The two files merged into < %s > file successfully..!!  " , new_file ) ;
    printf ( "\n\n* Here is the content of the merge file < %s > : \n\n" , new_file ) ;

    while ( fgets ( str , sizeof ( str ) , new_fptr ) != NULL )  printf ( " %s" , str ) ;

    printf ( "\n\n\n" ) ;
    fclose ( new_fptr ) ;
     
    return 0 ;
}