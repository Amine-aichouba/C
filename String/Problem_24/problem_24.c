


#include <stdio.h>
#include <string.h>


int main ()
{
    char ch ;

    printf ( "\n\n\t * Give me a character : " ) ;
    scanf ( " %c" , &ch ) ; getchar () ;

    if ( !( ch >= 'A' && ch <= 'Z' ) ) 
        printf ( "\n\t * The entered letter is not an UPPERCASE letter." ) ;
    else
        printf ( "\n\t * The entered letter is an UPPERCASE letter." ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}