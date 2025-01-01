


#include <stdio.h>

int main ()
{
    int T [6] = { 6 , 8 , 4 , -5 , 7 , 9 } , S [2] ;
    int sum = 15 , k = 0 ;
    
    for ( int i = 0 ; i < 6 ; i ++ )
        {
            for ( int j = i + 1 ; j < 6 ; j ++ )
                {
                    if ( T [i] + T [j] == sum )
                        {
                            S [k ++] = i ;
                            S [k ++] = j ; 
                            break ;
                        }
                }

            if ( k == 2 )
                break ;
        }
        
    printf ( "\n\n\t * The given array : " ) ;
    for ( int i = 0 ; i < 6 ; i ++ ) 
        printf ( " %d  " , T [i] ) ;

    if ( k == 2 )
        printf ( "\n\n\t * Pair of elements can make the given sum by the value of index %d and %d " , S [0] , S [1] ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}