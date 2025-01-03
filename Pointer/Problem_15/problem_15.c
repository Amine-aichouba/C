


#include <stdio.h>

int max ( int *first_val , int *second_val )
{
    return ( *first_val > *second_val ) ? *first_val : *second_val ;
}

int main ()
{
    int first_val , second_val , larger ;
    
    printf ( "\n\n\t * Give me the first number : " ) ;
    scanf ( " %d" , &first_val ) ;
    
    printf ( "\n\t * Give me the second number : " ) ;
    scanf ( " %d" , &second_val ) ;

    larger = max ( &first_val , &second_val ) ;

    printf ( "\n\n\t * The number %d is larger !!" , larger ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}