

#include <stdio.h>
#include <stdlib.h>


int compare ( const void* one , const void* two ) 
{
    return *( int* ) one > *( int* ) two ;
}

int count_number_of_triangles ( int* arr , size_t arr_size ) 
{
    int ctr_triangle = 0 , i , j , k ;
    qsort ( arr , arr_size , sizeof ( int ) , compare ) ; 

    for ( i = 0 ; i < ( int ) ( arr_size - 2 ) ; ++ i ) 
        {
            for ( j = i + 1 ; j < ( int ) arr_size ; ++ j ) 
                {
                    k = j + 1 ;
                    while ( k < ( int ) arr_size && ( arr [i] + arr [j]) > arr [k] )  k ++ ;
                    ctr_triangle += k - j - 1 ;
                }
        }
    
    return ctr_triangle ;
}

int main () 
{
    int arr [] = { 6 , 18 , 9 , 7 , 10 } ;
    size_t arr_size = sizeof ( arr ) / sizeof ( arr [0] ) ;
    int i ;

    printf ( "\n\n\t * The given array is :  " ) ;
    for ( i = 0 ; i < ( int ) arr_size ; i ++ )
        printf ( " %d " , arr [i] ) ;
    
    printf ( "\n\n\t * Number of possible triangles that can be formed from the array is : %d " , count_number_of_triangles ( arr , arr_size ) ) ;
    
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
