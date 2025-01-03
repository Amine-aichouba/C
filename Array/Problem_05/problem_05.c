


#include <stdio.h>

#define LIMIT 100

int main ()
{
    int T [ LIMIT ] , size ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;


    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t * Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; 
        }

    int counter = 0 ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            for ( int j = i + 1 ; j < size ; j ++ )
                {
                    if ( T [i] == T [j] )
                        {
                            counter ++ ;
                            break ;
                        }
                }
        }
   
    printf ( "\n\n\t * Total number of duplicate elements found in the array : %d " , counter ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}