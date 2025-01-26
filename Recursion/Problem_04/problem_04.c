


#include <stdio.h>

void print_arr ( int arr [] , int arr_size , int i ) 
{
    if ( arr_size == i ) return ; 
        
    printf ( " %d " , arr [i] ) ;
    print_arr ( arr , arr_size , i + 1 ) ;   
}

int main ()
{
    int arr [20] , arr_size , i ;

    printf ( "\n\n\t * Give me the number of elements to be stored in the array : " ) ;
    scanf ( " %d" , &arr_size ) ;

    printf ( "\n" ) ;
    for ( i = 0 ; i < arr_size ; i ++ )
        {
            printf ( "\n\t * arr [%d] : " , i + 1 ) ;
            scanf ( " %d" , &arr [i] ) ;
        }     

    i = 0 ;
    printf ( "\n\n\t * The elements in the array are : " ) ;
    print_arr ( arr , arr_size , i ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}