


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        if ( str [i] == ' ' ) str [i] = '\n' ;

    printf ( "\n\n\t * Strings or words after split by space are :\n%s " , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}