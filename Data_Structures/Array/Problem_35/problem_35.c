

#include <stdio.h>

int main ()
{
    int T [9] = { 8 , 3 , 8 , -5 , 4 , 3 , -4 , 3 , 5 } ; 
    int max_sum = T [0] ;
    int current_sum = T [0] ;

    for ( int i = 1 ; i < 9 ; i ++ )
        {
            current_sum = ( T [i] > current_sum + T [i] ) ? T [i] : current_sum + T [i] ;
            max_sum = ( current_sum > max_sum ) ? current_sum : max_sum ;
        }
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < 9 ; i ++ )
        printf ( "%d  " , T [i] ) ;

    printf ( "\n\n\t * The largest sum of a contiguous subarray is : %d" , max_sum ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}

