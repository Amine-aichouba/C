

#include <stdio.h>
#include <stdbool.h>


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


    printf ( "\n\n\t * The unique elements found in the array are : " ) ;


    for ( int i = 0 ; i < size ; i ++ )
        {
            bool k = true ;

            for ( int j = 0 ; j < size ; j ++ )
                {
                    if ( j != i ) 
                        {
                            if ( T [i] == T [j] )
                                k = false ;                        
                        }                    
                }
            
            if ( k )
                printf ( " %d " , *( T + i ) ) ;
        }
   

    printf ( "\n\n\n" ) ;

    return 0 ;
}