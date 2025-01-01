

#include <stdio.h>

void sum_series ()
{
    int sum = 0 , factor = 1 ;
    for ( int i = 1 ; i <= 5 ; i ++ )
        {
            factor *= i ;
            sum += factor / i ;
        }

    printf ( "\n\n\t * The sum of the series is : %d " , sum ) ;
    printf ( "\n\n\n" ) ;
}

int main ()
{
    sum_series () ;
    return 0 ;
}