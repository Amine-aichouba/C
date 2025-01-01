

#include <stdio.h>
#include <stdbool.h>

bool check_odd_even ( int number )
{
    return number % 2 == 0 ;
}

int main ()
{
    int number ;

    printf ( "\n\n\t * Give me a number : " ) ;
    scanf ( " %d" , &number ) ;

    if ( check_odd_even ( number ) )
        printf ( "\n\t * The entered number is even " ) ;
    else
        printf ( "\n\t * The entered number is odd " ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}