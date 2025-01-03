


#include <stdio.h>

#define LIMIT 100


int main ()
{
    int T [ LIMIT ] , F [ LIMIT ] , size ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;


    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t * Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; 
            F [i] = -1 ;
        }

    
    for ( int i = 0 ; i < size ; i ++ )
        {
            int counter = 1 ;

            for ( int j = i + 1 ; j < size ; j ++ )
                {
                    if ( T [i] == T [j] )
                        {
                            counter ++ ;
                            F [j] = 0 ;
                        }
                }
            
            if ( F [i] != 0 )
                F [i] = counter ;      
        }

    printf ( " \n\n\t * The frequency of all elements of the array : " ) ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            if ( F [i] != 0 )
                printf ( " \n\n\t * %d --> %d " , T [i] , F [i] ) ;
        }
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}