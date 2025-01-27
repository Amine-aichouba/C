


#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool palindrome ( char str [] , int fin , int star )
{
    if ( str [star] != str [fin] )  return false ;
    if ( fin <= star ) return true ;
    return palindrome ( str , fin - 1 , star + 1 ) ;
}


int main ()
{
    char str [50] ;
    int str_size ;

    printf ( "\n\n\t * Give me a word to check for palindrome : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;
    
    str_size = ( int ) strlen ( str ) ;

    if ( palindrome ( str , str_size - 1 , 0 ) )
        printf ( "\n\t * The entered word is a palindrome !!" ) ;
    else 
        printf ( "\n\t * The entered word is a not palindrome !!" ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}