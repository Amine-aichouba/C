


#include <stdio.h>
#include <stdlib.h>


int main ()
{
    FILE *fptr ;
    char file_name [20] , ch ;
    int i = 1 ;

    printf ( "\n\n* Give me the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name ) ;

    fptr = fopen ( file_name , "r" ) ;

    if ( fptr == NULL )
        {
            perror ( "\n* Error in opening file !  " ) ;
            return EXIT_FAILURE  ;
        }

    while ( ( ch = ( char ) fgetc ( fptr ) ) != EOF )
        {
            putchar ( ch ) ;
            if ( ch == '\n' )  i ++ ;
        }
    
    printf ( "\n\n* The lines in the file are : %d " , i ) ;
    printf ( "\n\n\n" ) ;

    fclose ( fptr ) ;

    return 0 ;
}