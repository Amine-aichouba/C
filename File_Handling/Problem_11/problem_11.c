


#include <stdio.h>
#include <stdlib.h>


int main ()
{
    char file_name [20] , str [100] , new_file [20] ;
    FILE *fptr , *new_fptr ;

    printf ( "\n\n* Enter the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name ) ; 

    printf ( "\n* Enter the new file name : " ) ;
    scanf ( " %s" , new_file ) ;


    fptr = fopen ( file_name , "r" ) ;
    if ( fptr == NULL ) 
        {
            perror ( "\n* Error in opening file ! " ) ;
            return EXIT_FAILURE ;
        }
    
    new_fptr = fopen ( new_file , "w" ) ;
    if ( new_fptr == NULL ) 
        {
            perror ( "\n* Error in creating temporary file !  " ) ;
            fclose ( fptr ) ;
            return EXIT_FAILURE ;
        }

    while ( fgets ( str , sizeof ( str ) , fptr ) != NULL )  
        fputs ( str , new_fptr ) ;
        
    printf ( "\n\n* The file < %s > copied successfully in the file < %s > " , file_name , new_file ) ;
    printf ( "\n\n\n" ) ;

    fclose ( fptr ) ;
    fclose ( new_fptr ) ;
     
    return 0 ;
}