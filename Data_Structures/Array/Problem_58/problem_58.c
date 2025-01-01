

#include <stdio.h>

int main ()
{
    int arr [] = { 2 , 5 , 7 , 0 , 4 , 0 , 7 , -5 , 8 , 0 } ;
    int arr_size = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    int count = 0 ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )  printf ( " %d " , arr [i] ) ;
    
    for ( int i = 0 ; i < arr_size ; i ++ )
        if ( arr [i] != 0 )  arr [count ++] = arr [i] ;
    while ( count < arr_size ) arr [count ++] = 0 ;
  
    printf ( "\n\n\t * The new array is : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )  printf ( " %d " , arr [i] ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}