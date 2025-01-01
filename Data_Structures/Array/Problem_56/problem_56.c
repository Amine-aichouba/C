


#include <stdio.h>
#include <limits.h>


int min_jumps ( int arr [] , int arr_size )  
{
    if ( arr_size <= 1 )  return 0 ;
    if ( arr [0] == 0 )  return INT_MAX ;

    int max_reach = arr [0] ;
    int step = arr [0] ;
    int jump = 1 ;

    for ( int i = 1 ; i < arr_size ; i ++ ) 
        {
            if ( i == arr_size - 1 )  return jump ;

            max_reach = ( i + arr [i] > max_reach ) ? i + arr [i] : max_reach ;
            step -- ;

            if ( step == 0 ) 
                {
                    jump ++ ;
                    if ( i >= max_reach )  return INT_MAX ;
                    step = max_reach - i ;   
                }
    }

    return INT_MAX ;
}

int main () 
{
    int arr [] = { 1 , 3 , 5 , 8 , 9 , 2 , 6 , 7 , 6 , 8 , 9 , 1 , 1 , 1 } ;
    int arr_size = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ; 
    int result ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )  printf ( " %d ", arr [i] ) ;
        
    result = min_jumps ( arr , arr_size ) ;
    
    if ( result != INT_MAX ) 
        printf ( "\n\n\t * The minimum number of jumps required to reach the end is: %d " , result ) ;
    else 
        printf ( "\n\n\t * Cannot reach the end of the array " ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}
