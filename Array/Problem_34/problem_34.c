


#include <stdio.h>

int main ()
{
    int T [9] = { 8 , 3 , 8 , 5 , 4 , 3 , 4 , 3 , 5 } , ctr ;
    int odd_number_of_times ;

    for ( int i = 0 ; i < 9 ; i ++ )
        {   
            ctr = 0 ;
            for ( int j = 0 ; j < 9 ; j ++ )
                {
                    if ( T [i] == T [j] )
                        ctr ++ ;
                }
            if ( ctr % 2 == 1 )
                odd_number_of_times = T [i] ;
        }
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < 9 ; i ++ )
        printf ( " %d  " , T [i] ) ;

    printf ( "\n\n\t * The element odd number of times is : %d " , odd_number_of_times ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}