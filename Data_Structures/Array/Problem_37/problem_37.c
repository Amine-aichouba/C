


#include <stdio.h>

int find_pivot_elem ( int *arr , int left_elem , int right_elem ) 
{
    if ( right_elem < left_elem ) 
        return -1 ; 

    if ( right_elem == left_elem )
        return left_elem ; // size of arr = 1

    int mid_elem = ( left_elem + right_elem ) / 2 ;

    if ( mid_elem < right_elem && arr [mid_elem] > arr [mid_elem + 1] )
        return mid_elem ;

    if ( mid_elem > left_elem && arr [mid_elem] < arr [mid_elem - 1] )
        return mid_elem - 1 ;

    if ( arr [left_elem] >= arr [mid_elem] ) 
        return find_pivot_elem ( arr , left_elem , mid_elem - 1 ) ;
     else 
        return find_pivot_elem ( arr , mid_elem + 1 , right_elem ) ;
    
}

int main () 
{
    int i ;
    int arr [] = { 14 , 23 , 7 , 9 , 3 , 6 , 18 , 22 , 16 , 36 } ;
    int ctr = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;

    printf ("\n\n\t * The given array is :  " ) ;
    for ( i = 0 ; i < ctr ; i ++ ) 
        printf ( " %d  " , arr [i] ) ;
    
    printf ( "\n\n\t * The Pivot Element in the array is : %d " , arr [find_pivot_elem ( arr , 0 , ctr - 1 ) + 1] ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}