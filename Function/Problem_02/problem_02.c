


#include <stdio.h>

double square_number ( double number )
{
    return number * number ;
}

int main ()
{
    double number ;

    printf ( "\n\n\t * Give me any number for square : " ) ;
    scanf ( " %lf" , &number ) ;
    printf ( "\n\t * The square of %.2lf is : %.2lf" , number , square_number ( number ) ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}