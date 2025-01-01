

#include <stdio.h>

size_t length ( char str [] )
{
    size_t i = 0 ;
    while ( str [i] != '\0' ) i ++ ;
    return i - 1 ; 
}

int main ()
{
    char str [50] ;
    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;

    printf ( "\n\t * Length of the string is : %d " , ( int ) length ( str ) ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}