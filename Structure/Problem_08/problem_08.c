


#include <stdio.h>


typedef struct 
        {
            float real ;
            float imag ;
        } Complex ;


Complex add_complex ( Complex num1 , Complex num2 ) 
{
    Complex result ;
    result.real = num1.real + num2.real ;
    result.imag = num1.imag + num2.imag ;
    return result ;
}


Complex multiply_complex ( Complex num1 , Complex num2 ) 
{
    Complex result ;
    result.real = ( num1.real * num2.real ) - ( num1.imag * num2.imag ) ;
    result.imag = ( num1.real * num2.imag ) + ( num1.imag * num2.real ) ;
    return result ;
}


void display_complex ( Complex num ) 
{
    printf ( "%.2f + %.2fi" , num.real , num.imag ) ;
}

int main () 
{
    Complex complex_num1 , complex_num2 , sum_result , product_result ;

    printf ( "\n\n\t * Give me details for Complex Number 1 ( real imag ) : " ) ;
    scanf ( "%f %f" , &complex_num1.real , &complex_num1.imag ) ;

    printf ( "\n\t * Give me details for Complex Number 2 ( real imag ) : " ) ;
    scanf ( "%f %f" , &complex_num2.real , &complex_num2.imag ) ;

    sum_result = add_complex ( complex_num1 , complex_num2 ) ;

    product_result = multiply_complex ( complex_num1 , complex_num2 ) ;

    printf ( "\n\n\t * Sum of Complex Numbers : " ) ;
    display_complex ( sum_result ) ;

    printf ( "\n\n\t * Product of Complex Numbers : " ) ;
    display_complex ( product_result ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}
