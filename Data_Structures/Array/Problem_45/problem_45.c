

#include <stdio.h>
#include <limits.h>

int main ()
{
    int arr [] = { 38 , 44 , 63 , -51 , -35 , 19 , 84 , -69 , 4 , -46 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int index [2] ;
    int temp = -1000 ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            for ( int j = i + 1 ; j < size ; j ++ )
                {
                    if ( ( arr [i] < 0 || arr [j] < 0 ) && ( arr [i] + arr [j] < 0 ) && ( arr [i] + arr [j] > temp ) )
                        {
                            index [0] = arr [i] ;
                            index [1] = arr [j] ;
                            temp = arr [i] + arr[j] ;
                        }
                }
        }
     
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , arr [i] ) ;
    
    printf ( "\n\n\t * The Pair of elements whose sum is minimum are : %d  %d " , index [0] , index [1] ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}