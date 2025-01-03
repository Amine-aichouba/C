


#include <stdio.h>


int main ()
{
    int arr [100] , arr_size , *ptr ;

    printf ( "\n\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &arr_size) ;

    ptr = arr ;

    printf ( "\n\n\t * Give me %d number of elements in the array : \n" , arr_size ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )
        {
            printf ( "\n\t * Element %d : " , i+1 ) ;
            scanf ( " %d" , ptr ) ;
            ptr ++ ;
        }
    
    printf ( "\n\n\t * The elements of array in reverse order are : " ) ;
    for ( int i = arr_size - 1 ; i >= 0 ; i -- )
        { 
            ptr -- ;
            printf ( "\n\n\t * Element %d : %d " , i+1 , *ptr ) ;
        }

    printf ( "\n\n\n" ) ;
          
    return 0 ;
}