


#include <stdio.h>


int main ()
{
    double number , i ;

    printf ( "\n\n\t * Give me the number : " ) ;
    scanf ( " %lf" , &number ) ;

    printf ( "\n\t * The Factorial of %.0lf is : " , number ) ;
    for ( i = number - 1 ; i > 1 ; i -- )  number *= i ;
        
    printf ( " %.0lf \n\n\n" , number ) ;
        
    return 0 ;
}