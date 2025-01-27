


#include <stdio.h>


int hailstone ( int n ) 
{
    if ( n == 1 ) 
        {
            printf ( " 1 " ) ;
            return 1 ;
        }

    printf ( " %d " , n ) ; 
    if ( n % 2 == 0 ) 
        return 1 + hailstone ( n / 2 ) ; 
    else 
        return 1 + hailstone ( 3 * n + 1 ) ;
}

int main () 
{
    int number ;

    printf ( "\n\n\t * Give me any number ( positive ) to start for Hailstone Sequence : " ) ;
    scanf ( " %d" , &number ) ;

    if ( number <= 0 ) 
        {
            printf ( "\n\t * Please enter a positive integer. \n\n\n" ) ;
            return 1 ; 
        }

    printf ( "\n\t * The hailstone sequence starting at %d is : " , number ) ;
    
    printf ( "\n\n\t * The length of the sequence is : %d " , hailstone ( number ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ; 
}