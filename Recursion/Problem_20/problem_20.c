


#include <stdio.h>
#include <string.h>


char  first_capital_letter ( char* str )
{
    if ( *str == '\0' ) return *str ;
    if ( *str >= 'A' && *str <= 'Z' )  return *str ;
    return first_capital_letter ( str + 1 ) ;
}


int main ()
{
    char str [50] , letter ;    

    printf ( "\n\n\t * Give me a string to including one or more capital letters : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    letter = first_capital_letter ( str ) ;

    if ( letter != '\0' ) 
        printf ( "\n\t * The first capital letter appears in the %s is %c " , str , letter ) ;
    else
        printf ( "\n\n\t * There are no capital letters in the string " ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}