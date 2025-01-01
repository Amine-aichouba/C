

#include <stdio.h>

int decimal_to_binary ( int number )
{
    int bin = 0 , buffer = 1 ;
    while ( number != 0 )
        {
            bin += ( number % 2 ) * buffer ; 
            number /= 2 ;
            buffer *= 10 ;
        }
    return bin ;
}

int main ()
{
    int number ;
    printf ( "\n\n\t * Give me decimal numbre : " ) ;
    scanf ( " %d" , &number ) ;

    printf ( "\n\t * The Binary value is : %d " , decimal_to_binary ( number ) ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}