

#include <stdio.h>

int main ()
{
    int arr [] = { 2 , 7 , 4 , 7 , 8 , 3 , 4 } ;
    int arr_1 [] = { -1 , -1 , -1 , -1 , -1 , -1 , -1 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            for ( int j = i + 1 ; j < size ; j ++ )
                {
                    if ( ( arr [i] == arr [j] ) && arr_1 [i] != 0 )
                        {
                            arr_1 [i] = arr [j] ;
                            arr [j] = 0 ;
                        }
                }
        }
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , arr [i] ) ;

    printf ( "\n\n\t * The repeating elements are : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            if ( arr_1 [i] > 0 ) 
                printf ( " %d " , arr_1 [i] ) ;
        }

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}