

#include <stdio.h>
#include <stdbool.h>

int main () 
{
    int arr [] = { 3 , 1 , 4 , 10 , -5 , 15 , 2 , -10 , -20 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int smallest_positive = 1 ; 
    bool found ;

    while ( true ) 
        {
            found = false ; 
            for ( int j = 0 ; j < size ; j ++ ) 
                {
                    if ( arr [j] == smallest_positive ) 
                        {
                            found = true ;  
                            break ;
                        }
                }
                if ( !found ) break ;
            smallest_positive ++ ; 
        }

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf(" %d ", arr [i] ) ;

    printf ( "\n\n\t * The smallest positive number missed is : %d " , smallest_positive ) ;
    
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}