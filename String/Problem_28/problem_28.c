


#include <stdio.h>


int main ()
{
    char ch ;

    printf ( "\n\n\t * Give me a character : " ) ;
    scanf ( " %c" , &ch ) ;

    if ( ch >= 'a' && ch <= 'z' ) 
        printf ( "\n\n\t * The entered letter is a lowercase letter." ) ;
    else
        printf ( "\n\n\t * The entered character is not a lowercase letter." ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}