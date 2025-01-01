#include <stdio.h>


void find_floor_and_ceiling ( int arr [] , int arr_size , int x , int *floor , int *ceiling ) 
{
    int left = 0 , right = arr_size - 1 ;
    *floor = -1 ;   
    *ceiling = -1 ; 

    while ( left <= right ) 
        {
            int mid = left + (right - left) / 2 ;

            if ( arr [mid] == x ) 
                {
                    *floor = arr [mid] ;
                    *ceiling = arr [mid] ;
                    return ;
                }
            else 
                if ( arr [mid] < x ) 
                    {
                        *floor = arr [mid] ; 
                        left = mid + 1 ;
                    }
            else 
                {
                    *ceiling = arr [mid] ;
                    right = mid - 1 ;
                }
        }
}

int main () 
{
    int arr [] = { 1 , 2 , 3 , 5 , 7 , 8 , 10 , 12 , 15 } ; 
    int arr_size = ( int ) ( sizeof (arr) / sizeof ( arr[0] ) ) ;

    printf ( "\n\t Number  |  Floor  |  Ceiling" ) ;
    printf ( "\n\t ____________________________\n" ) ;

    for ( int x = 0 ; x <= 10 ; x ++ ) 
        {
            int floor , ceiling ;
            find_floor_and_ceiling ( arr , arr_size , x , &floor , &ceiling ) ;
            printf ( "%12d %9d %9d\n" , x , floor , ceiling ) ;
        }

    printf ( "\n\n\n" ) ;

    return 0 ;
}