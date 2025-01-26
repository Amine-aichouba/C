

#include <stdio.h>


void to_binary ( int decimal_number ) 
{
    if ( decimal_number > 1 ) 
        to_binary ( decimal_number / 2 ) ;
    printf ( "%d" , decimal_number % 2 ) ;
}

int main ()
{
    int number ;

    printf ( "\n\n\t * Give me any decimal number : " ) ;
    scanf ( " %d" , &number ) ;

    printf ( "\n\t * The Binary value of decimal no %d is : " , number ) ; 
    to_binary( number) ;
  
    printf ( "\n\n\n" ) ;
    return 0 ;
}