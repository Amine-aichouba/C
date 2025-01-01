


#include <stdio.h>
#include <stdbool.h>

bool is_perfect ( int number ) 
{
    int sum = 0 ;
    
    for ( int i = 1 ; i <= number / 2 ; i ++ ) 
        if ( number % i == 0 ) sum += i ;
    
    return sum == number ;
}


void print_perfect_numbers ( int start , int end ) 
{
    printf ( "\n\n\t * The perfect numbers between %d to %d are : " , start , end ) ;
    
    for ( int num = start ; num <= end ; num ++ ) 
        if ( is_perfect ( num ) ) printf( " %d " , num ) ;
        
    printf ( "\n\n\n" ) ;
}

int main () 
{
    int start , end ;

    printf ( "\n\n\t * Give me lowest search limit of perfect numbers : " ) ;
    scanf ( " %d" , &start ) ;
    printf ( "\n\n\t * Give me highest search limit of perfect numbers : " ) ;
    scanf ( " %d" , &end ) ;

    print_perfect_numbers ( start , end ) ;

    return 0;
}
