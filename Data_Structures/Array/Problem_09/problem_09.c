


#include <stdio.h>

#define LIMIT 100

int main ()
{
    int T [ LIMIT ] , size ;
    int max = 0 , min = 0 , max_place = 0 , min_place = 0 ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;


    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t * Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; 
        }

    max = T [0] ;
    min = T [0] ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            if ( T [i] > max )
                {
                    max = T [i] ;
                    max_place = i ;
                }

            if ( T [i] < min )
                {
                    min = T [i] ;
                    min_place = i ;
                }
        }
    
    printf ( " \n\n\t * max : %d " , T [ max_place ] ) ;
    printf ( " \n\n\t * min : %d " , T [ min_place ] ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}