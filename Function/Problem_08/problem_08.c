


#include <stdio.h>

int largest_element ( int arr [] , int arr_size )
{
    int largest = arr [0] ;
    for ( int i = 1 ; i < arr_size ; i ++ )
        if ( arr [i] > largest ) largest = arr [i] ;
    return largest ;
}

int main ()
{
    int arr [50] , arr_size ;

    printf ( "\n\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &arr_size ) ;

    for ( int i = 0 ; i < arr_size ; i ++ )
        {
            printf ( "\n\t * Element %d : " , i+1 ) ;
            scanf ( " %d" , &arr [i] ) ;
        }

    printf ( "\n\n\t * The largest element in the array is : %d " , largest_element ( arr , arr_size ) ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}