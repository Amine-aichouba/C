

#include <stdio.h>

int factorial ( int *number  )
{
    if ( *number == 0 || *number == 1 )  return 1 ;
    int num = *number - 1 ; 
    return *number * factorial ( &num ) ;
}

int main ()
{
    int number ; 

    printf ( "\n\n\t * Give me a number : " ) ;
    scanf ( " %d" , &number ) ;

    printf ( "\n\n\t * The Factorial of %d is : %d " , number , factorial ( &number ) ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}