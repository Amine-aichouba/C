


#include <stdio.h>


int main ()
{
    char ch ;

    printf ( "\n\n\t * Give me a character : " ) ;
    scanf ( " %c" , &ch ) ;

    if ( ch >= '0' && ch <= '9' )
        printf ( "\n\n\t * The entered character is a digit." ) ;
    else
        printf ( "\n\t * The entered character is not a digit." ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}