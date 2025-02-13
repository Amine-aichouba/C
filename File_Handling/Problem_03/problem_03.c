


#include <stdio.h>
#include <stdlib.h>

#define  F_NAME "test.txt"


int main ()
{
    int num_lines , i ;
    char str [100][100] , ch ;
    FILE *fptr ;

//-----------------------------[ write ]-------------------------------------
    
    fptr = fopen ( F_NAME , "w" ) ;

    printf ( "\n\n * Give me the number of lines to be written : " ) ;
    scanf ( " %d" , &num_lines ) ;  getchar () ;

    for ( i = 1 ; i <= num_lines ; i ++ )
        {
            printf ( "\n %d :  " , i ) ;
            fgets ( str [i] , sizeof ( str ) , stdin ) ;
            fprintf ( fptr , "%s" , str [i] ) ;
        }
    fclose ( fptr ) ;
    
//-----------------------------[ read ]-------------------------------------

    printf ( "\n\n * The content of the file < %s > is :  \n\n"  , F_NAME ) ;
    
    fptr = fopen ( F_NAME , "r" ) ;

    if( fptr == NULL )
        {
            perror ( "\n* Error in opening file! " ) ;
            return EXIT_FAILURE ;
        }

    while ( ( ch = ( char ) fgetc ( fptr ) ) != EOF )  putchar ( ch ) ;

    printf ( "\n\n\n" ) ;
    fclose ( fptr ) ;
   
    return 0 ;
}