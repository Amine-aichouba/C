


#include <stdio.h>


int sum ( int number , int n )
{
    if ( number > n )  return 0 ;
    return number + sum ( number + 1 , n ) ;
}

int main ()
{
    int number = 1 , n ;
    
    printf ( "\n\n\t * Give me the last number of the range starting from 1 : " ) ; 
    scanf ( " %d" , &n ) ;

    printf ( "\n\t * The sum of numbers from 1 to %d : %d " , n , sum ( number , n ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}