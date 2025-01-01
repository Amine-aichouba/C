


#include <stdio.h>
#include <stdlib.h>

int compare ( const void* one , const void* two )
{
    return *( int* ) one - *( int* ) two ;
}

int main ()
{
    int arr [] = { 0 , 1 , 2 , 2 , 1 , 0 , 0 , 2 , 0 , 1 , 1 , 0 } ;
    size_t arr_size = sizeof ( arr ) / sizeof ( arr [0] ) ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < ( int ) arr_size ; i ++ )
        printf ( " %d " , arr [i] ) ;
    
    qsort ( arr , arr_size , sizeof ( int ) , compare ) ;

    printf ( "\n\n\t * After sortig the elements in the array are : " ) ;
    for ( int i = 0 ; i < ( int ) arr_size ; i ++ )
        printf ( " %d " , arr [i] ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}
