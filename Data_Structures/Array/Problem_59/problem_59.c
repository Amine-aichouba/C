

#include <stdio.h>

void counting_sort ( int arr [] , int arr_size , int max ) 
{
    int count [50] = {0} ; 

    for ( int i = 0 ; i < arr_size ; ++ i )
        count [ arr [i] ] = count [ arr [i] ] + 1 ;

    printf ( "\n\n\t * After sorting the elements in the array are : " ) ;

    for ( int i = 0 ; i <= max ; ++ i ) 
        for ( int j = 1 ; j <= count [i] ; ++ j )  printf ( " %d " , i ) ;

    printf ( "\n\n\n" ) ;        
}

int main () 
{
    int max = 0 ; 
    int arr [] = { 4 , 14 , 8 , 0 , 2 , 5 , 2 , 1 , 0 , 17 , 9 , 0 , 5 } ; 
    int arr_size = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ ) 
        {
            if ( arr [i] > max )  max = arr [i] ; 
            printf ( " %d " , arr [i] ) ;
        }

    counting_sort ( arr , arr_size , max ) ; 
    
    return 0 ;
}
