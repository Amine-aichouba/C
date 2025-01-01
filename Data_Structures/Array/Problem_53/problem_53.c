


#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int arr [] = { 2 , 3 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 6 , 7 , 7 } ;
    int arr_size = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    int number = 4 ;
    int k = 0 ;

    for ( int i = 0 ; i < arr_size ; i ++ )
        if ( arr [i] == number ) k ++ ;
        
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < arr_size ; i ++ )
        printf ( " %d " , arr [i] ) ;

    if ( k != 0 ) 
        printf ( "\n\n\t * The number of times the number %d occurs in the given array is : %d" , number , k ) ;
    else
        printf ( "\n\n\t * %d not found in the array " , number ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}