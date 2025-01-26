


#include <stdio.h>


int max_element ( int arr [] , int arr_size , int i , int max ) 
{
    if ( i >= arr_size )  return max ;
    if ( arr [i] > max )  return  max_element ( arr , arr_size , i + 1 , arr [i] ) ;
    return max_element ( arr , arr_size , i + 1 , max ) ;
}

int main ()
{
    int arr [20] , arr_size , i , max ;

    printf ( "\n\n\t * Give me the number of elements to be stored in the array : " ) ;
    scanf ( " %d" , &arr_size ) ;

    printf ( "\n" ) ;
    for ( i = 0 ; i < arr_size ; i ++ )
        {
            printf ( "\n\t * arr [%d] : " , i + 1 ) ;
            scanf ( " %d" , &arr [i] ) ;
        }     

    i = 0 ; max = arr [0] ;

    printf ( "\n\n\t * Largest element of an array is : " ) ;
    printf (  " %d " , max_element ( arr , arr_size , i , max ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}