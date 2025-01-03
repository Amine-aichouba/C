

#include <stdio.h>

int main ()
{
    int arr [] = { 5 , 3 , 10 , 9 , 6 , 13 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int next_bigger [20] ;

    for ( int i = 0 ; i < size - 1 ; i ++ )
        {
            for ( int j = i + 1 ; j < size ; j ++ )
                {
                    if ( arr [i] < arr [j] )
                        {
                            next_bigger [i] = arr [j] ;
                            break ;
                        }
                }
        }

    next_bigger [size - 1] = -1 ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d  " , arr [i] ) ;
    
    printf ( "\n\n\t * Next Bigger Elements Array : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d  " , next_bigger [i] ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}