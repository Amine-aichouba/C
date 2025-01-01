

#include <stdio.h>


int main ()
{
    int arr [50] , arr_size ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &arr_size ) ;

    for ( int i = 0 ; i < arr_size ; i ++ ) 
        {
            printf ( "\n\t * Give me Arr [%d] : " , i+1 ) ;
            scanf ( " %d" , ( arr + i ) ) ;
        }

    printf ( "\n\n\t * Arr [] : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )  printf ( " %d " , arr [i] ) ;
    
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}