



#include <stdio.h>


int factorial ( int number )
{ 
    if ( number == 1 )  return 1 ;
    return number * factorial ( number - 1 ) ; 
}

int main ()
{
    int number ;

    printf ( "\n\n\t * Give me a number : " ) ;
    scanf ( " %d" , &number ) ;

    printf ( "\n\t * The Factorial of %d is : %d " , number , factorial ( number ) ) ;
    printf ( "\n\n\n" ) ; 
    return 0 ;
}