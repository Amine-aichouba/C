


#include <stdio.h>
#include <stdbool.h>


bool prime ( int number , int i ) 
{
    if ( i*i >= number )  return true ;
    if ( number % i == 0 )  return false ;
    return prime ( number , i *= 2 ) ;
}

int main ()
{
    int number , i = 2 ;

    printf ( "\n\n\t * Give me any positive number : " ) ;
    scanf ( " %d" , &number ) ;

    if ( prime ( number , i ) ) 
        printf ( "\n\t * The number %d is a prime number " , number ) ;
    else
        printf ( "\n\t * The number %d is a not prime number " , number ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}