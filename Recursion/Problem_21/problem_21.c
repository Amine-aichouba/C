


#include <stdio.h>


int binary_search ( int arr [] , int left , int right , int target ) 
{
    if ( left > right )  return -1 ; 
    
    int mid = left + ( right - left ) / 2 ;

    if ( arr [mid] == target )  return mid ;
    
    else 
        if ( arr [mid] > target ) 
            return binary_search ( arr , left , mid - 1 , target ) ;
    else 
        return binary_search ( arr , mid + 1 , right , target ) ;
}

int main () 
{
    int n , arr [50] , target , i , result ;

    printf ( "\n\n\t * Give me the number of elements to store in the array : " ) ;
    scanf ( " %d" , &n ) ;

    printf ( "\n" ) ;
    for ( i = 0 ; i < n ; i ++ ) 
        {
            printf ( "\n\t * Element ( %d ) : " , i+1 ) ;
            scanf ( " %d" , &arr [i] ) ;
        }

    printf ( "\n\n\t * Give me the number to search : " ) ;
    scanf ( " %d" , &target ) ;

    result = binary_search ( arr , 0 , n-1 , target ) ;

    if ( result != -1 ) 
        printf ( "\n\t * The search number found in the array " ) ;
    else 
        printf ( "\n\t * The search number not found in the array " ) ;
    printf ( "\n\n\n" ) ;
    return 0;
}