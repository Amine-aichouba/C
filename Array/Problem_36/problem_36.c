

#include <stdio.h>

int main ()
{
    int T [8] = { 1 , 3 , 4 , 2 , 5 , 6 , 9 , 8 } , missing_number ; 
    int expected_sum , actual_sum , n = 9 ;
     
    expected_sum = n * ( n + 1) / 2 ; // 1+2+3+4+5+6+7+8+9 = 45
    for ( int i = 0 ; i < 8 ; i ++ )
        actual_sum += T [i] ; // 1+3+4+2+5+6+9+8 = 38
    
    missing_number = expected_sum - actual_sum ; //  45 - 38 = 7 

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < 8 ; i ++ )
        printf ( "%d  " , T [i] ) ;

    printf ( "\n\n\t * The missing number is :  %d" , missing_number ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}
