


#include <stdio.h>

int find_ceiling  ( int arr [] , int n , int x ) 
{
    int left = 0 , right = n - 1 ;
    int ceiling = -1 ; 

    while ( left <= right ) 
        {
            int mid = left + ( right - left ) / 2 ;

            if ( arr [mid] == x )
                return arr [mid] ;
            else 
                if ( arr [mid] < x ) 
                    left = mid + 1 ;
            else
                {
                    ceiling = arr [mid] ;
                    right = mid - 1 ;
                }
    }
    return ceiling ; 
}

int main () 
{
    int arr [] = { 1 , 3 , 4 , 7 , 8 , 9 , 9 , 10 } ; 
    int n = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int x ;

    printf ( "\n\n\t * Enter the value of x : " ) ;
    scanf ( " %d" , &x ) ;

    printf ( "\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < n ; i ++ )
        printf ( " %d  " , arr [i] ) ;
    
    int ceiling = find_ceiling ( arr , n , x ) ;

    if ( ceiling != -1 ) 
        printf ( "\n\n\t * The ceiling of %d is %d " , x , ceiling ) ;
    else 
        printf ( "\n\n\t * There is no ceiling for %d in the array " , x ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}