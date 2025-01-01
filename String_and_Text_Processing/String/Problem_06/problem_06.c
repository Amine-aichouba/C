

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool str_equal ( char first_str [] , char second_str [] )
{
    if ( strlen ( first_str ) != strlen ( second_str ) )  return false ;
    
    for ( int i = 0 ; first_str [i] != '\n' ; i ++ )
        if ( first_str [i] != second_str [i] ) return false ;
    
    return true ;
}

int main ()
{
    char first_str [50] , second_str [50] ;

    printf ( "\n\n\t * Give me the first string : " ) ;
    fgets ( first_str , sizeof ( first_str ) , stdin ) ;

    printf ( "\n\t * Give me the second string : " ) ;
    fgets ( second_str , sizeof ( second_str ) , stdin ) ;

    if ( str_equal ( first_str , second_str ) )
        printf ( "\n\n\t * Strings are equal !!" ) ;
    else
        printf ( "\n\n\t * Strings are not equal !!" ) ;
    
    printf ( "\n\n\n" ) ;
    return 0 ;
}