


#include <stdio.h>
#include <stdlib.h>


int main ()
{
    char fname [20] ;
    char str ;
    FILE *file ;
    
    printf ( "\n\n\t * Give me the name of the file you want to open : " ) ; 
    scanf ( " %s" , fname ) ;

    file = fopen ( fname, "r" ) ;
    
    if ( !file ) 
        {
            printf ( "\n\n\t * File does not exist or cannot be opened !!\n\n" ) ;
            exit (1) ;
        }
    
    printf ( "\n\t * The content of the file ( %s ) is  :  " , fname ) ;

    while ( ( str = ( char ) fgetc ( file ) ) != EOF )   putchar ( str ) ;

    fclose ( file ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}