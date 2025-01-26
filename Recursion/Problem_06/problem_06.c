


#include <stdio.h>


int sum_num ( int number , int sum )
{
    if ( number == 0 )  return sum ;
    return sum_num ( number / 10 , sum + ( number % 10 ) ) ;
}

int main ()
{
    int number , ctr , sum = 0;

    printf ( "\n\n\t * Give me a number : " ) ;
    scanf ( " %d" , &number ) ;

    ctr = sum_num ( number , sum ) ;

    printf ( "\n\t * The number of digits in the number is :  %d \n\n" , ctr ) ;
    return 0 ;
}
