


#include <stdio.h>
#include <ctype.h>


int main () 
{
    char ch ;

    printf ( "\n\n\t Give me a character : " ) ;
    scanf ( " %c" , &ch ) ;

    if ( ( ch >= '0' && ch <= '9' )  
         || ( ch >= 'A' && ch <= 'F' )  
            || ( ch >= 'a' && ch <= 'f' )  ) 
        printf ( "\n\n\t * The entered character is a hexadecimal digit. " ) ;
    else 
        printf ( "\n\n\t * The entered character is not a hexadecimal digit." ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
