


#include <stdio.h>
#include <stdbool.h>

bool is_prime ( int number )
{
    if ( number <= 1 )  return false ; 
    if ( number == 2 )  return true ; 
    if ( number % 2 == 0 )  return false ;
    
    for ( int i = 3 ; i*i <= number ; i += 2 )
        if ( number % i == 0 )  return false ;
        
    return true ;
}

int main ()
{
    int number ;

    printf ( "\n\n\t * Give me the number : " ) ;
    scanf ( " %d" , &number ) ;

    if ( is_prime ( number ) ) 
        printf ( "\n\n\t * The number < %d > is a prime number " , number ) ;
    else
        printf ( "\n\n\t * The number < %d > is not a prime number " , number ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}