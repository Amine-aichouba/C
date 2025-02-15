


#include <stdio.h>
#include <stdlib.h>


int main () 
{
    char file_name [20] ;
    long int till ;
    FILE *fptr ;

    printf ( "\n\n* Enter the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name ) ; 

    fptr = fopen ( file_name , "r" ) ;
    if ( fptr == NULL ) 
        {
            perror ( "\n* Error in opening file ! " ) ;
            return EXIT_FAILURE ;
        }
        
    fseek ( fptr , 0 , SEEK_END ) ;
    till = ftell ( fptr ) ;

    printf ( "\n* Size of the said File : %ld bytes" , till ) ;
    printf ( "\n\n\n" ) ;
    fclose ( fptr ) ;
    return 0;
}