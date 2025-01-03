


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    char str [100] ;
    int count = 0 ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        if ( ispunct ( str [i] ) ) count ++ ;

    printf ( "\n\t * The punctuation characters exists in the string is : %d " , count ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}