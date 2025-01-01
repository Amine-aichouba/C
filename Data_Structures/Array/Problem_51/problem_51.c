

#include <stdio.h>
#include <limits.h>

int max_sum_subarray ( int arr [] , int size ) 
{
    int max_so_far = INT_MIN , max_ending_here = 0 ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            max_ending_here += arr [i] ;
            if ( max_so_far < max_ending_here )
                max_so_far = max_ending_here ;
            if ( max_ending_here < 0 )
                max_ending_here = 0 ;
        }
    return max_so_far ;
}

int circular_subarray_sum ( int arr [] , int size ) 
{
    int max_kadane = max_sum_subarray ( arr , size ) ;
    int max_wrap = 0 ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            max_wrap += arr [i] ;
            arr [i] = -arr [i] ;
        }
    max_wrap = max_wrap + max_sum_subarray ( arr , size ) ;
    return ( max_wrap > max_kadane ) ? max_wrap : max_kadane ;
}

int main () 
{
    int arr [] = { 10 , 8 , -20 , 5 , -3 , -5 , 10 , -13 , 11 } ;
    int size = ( int ) sizeof ( arr ) / sizeof ( arr [0] ) ;
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , arr [i] ) ;

    printf ( "\n\n\t * The maximum circular subarray sum is : %d " , circular_subarray_sum ( arr , size ) ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}
