

#include <stdio.h>

int find_min ( int arr [] , int low , int high ) 
{
    if ( high < low )  return arr [0] ;
    if ( high == low )  return arr [low] ;
    int mid = ( low + high ) / 2 ;
    if ( mid < high && arr [mid + 1] < arr [mid] )  return arr [mid + 1] ;
    if ( mid > low && arr [mid] < arr [mid - 1] )  return arr [mid] ;
    if ( arr [high] > arr [mid] )  return find_min ( arr , low , mid - 1 ) ;
        
    return find_min ( arr , mid + 1 , high ) ;
}

int main () 
{
    int arr [] = { 3 , 4 , 5 , 6 , 7 , 9 , 2 } ;
    int arr_size = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    int min_element ;
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ ) printf ( " %d " , arr [i] ) ;
        
    min_element = find_min ( arr , 0 , arr_size - 1 ) ;
    printf ( "\n\n\t * The minimum element in the above array is : %d " , min_element ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}