


#include <stdio.h>


int num_of_digits ( int number , int n )
{
    if ( number == 0 )  return n ;
    return num_of_digits ( number / 10 , n + 1 ) ;
}

int main ()
{
    int n , ctr ;

    printf ( "\n\n\t * Give me a number : " ) ;
    scanf ( " %d" , &n ) ;
    int i = 0 ;
    ctr = num_of_digits ( n , i ) ;

    printf ( "\n\t * The number of digits in the number is :  %d \n\n" , ctr ) ;
    return 0 ;
}