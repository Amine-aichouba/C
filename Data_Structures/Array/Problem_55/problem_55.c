


#include <stdio.h>
#include <stdlib.h>

int compare ( const void* one , const void* two )
{
    return *( int* ) one - *( int* ) two ;
}

int main ()
{
    int first_arr [] = { 4 , 8 , 7 , 11 , 6 , 9 , 5 , 0 , 2 } ;
    int second_arr [] = { 5 , 4 , 2 , 0 , 6 } ;
    size_t first_arr_size = ( int ) ( sizeof ( first_arr ) / sizeof ( first_arr [0] ) ) ;
    size_t second_arr_size = ( int ) ( sizeof ( second_arr ) / sizeof ( second_arr [0] ) ) ;

    qsort ( first_arr , first_arr_size , sizeof ( int ) , compare ) ;

    int count = 0 ;
    for ( int i = 0 ; i < ( int ) second_arr_size ; i ++ )
        {
            int *result = ( int* ) bsearch ( &second_arr [i] , first_arr , first_arr_size , sizeof ( int ) , compare ) ;
            if ( result != NULL ) count ++ ;
        }
    
    printf ( "\n\n\t * The given first array is : " ) ;
    for ( int i = 0 ; i < ( int ) first_arr_size ; i ++ )
        printf ( " %d " , first_arr [i] ) ;

    printf ( "\n\n\t * The given second array is : " ) ;
    for ( int i = 0 ; i < ( int ) second_arr_size ; i ++ )
        printf ( " %d " , second_arr [i] ) ;

    if ( count == ( int ) second_arr_size ) 
        printf ( "\n\n\t * The second array is the subset of first array " ) ;
    else 
        printf ( "\n\n\t * The second array is NOT the subset of first array " ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}