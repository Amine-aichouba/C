


#include <stdio.h>


int main ()
{
    int arr [100] , arr_size , *ptr , sum = 0 ;

    printf ( "\n\n\t * Give me the number of elements to store in the array ( max 10 ) : " ) ;
    scanf ( " %d" , &arr_size) ;

    ptr = arr ;

    printf ( "\n\n\t * Give me %d number of elements in the array : \n" , arr_size ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )
        {
            printf ( "\n\t * Element %d : " , i+1 ) ;
            scanf ( " %d" , ptr ) ;
            sum += *ptr ;
            ptr ++ ;
        }
    
    printf ( "\n\n\t * The sum of array is : %d " , sum ) ;
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}