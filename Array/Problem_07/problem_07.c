




#include <stdio.h>
#include <stdbool.h>


#define LIMIT 100

int main ()
{
    int T1 [ LIMIT ] , T2 [ LIMIT ] , T3 [ 2*LIMIT ] , size_T1 , size_T2 , size_T3 ;


    printf ( "\n\t * Give me the size of the first array : " ) ;
    scanf ( " %d" , &size_T1 ) ;

    for ( int i = 0 ; i < size_T1 ; i ++ ) 
        {
            printf ( "\n\t * Give me T1 [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T1 + i ) ) ; 
        }


    printf ( "\n\t * Give me the size of the second array : " ) ;
    scanf ( " %d" , &size_T2 ) ;

    for ( int i = 0 ; i < size_T2 ; i ++ ) 
        {
            printf ( "\n\t * Give me T2 [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T2 + i ) ) ; 
        }

    int k ;

    for ( k = 0 ; k < size_T1 ; k ++ )
        {
            T3 [k] = T1 [k]  ;
        }
        
    for ( int j = 0 ; j < size_T2 ; j ++ )
        {
            T3 [k] = T2 [j] ;
            k ++ ;
        }      
            
        
    size_T3 = size_T2 + size_T1 ;

    for ( int i = 0 ; i < size_T3 ; i ++ )
        {
            for ( int j = i + 1 ; j < size_T3 ; j ++ )
                {
                    if ( T3 [i] < T3 [j] )
                        {
                            int temp = T3 [i] ;
                            T3 [i] = T3 [j] ;
                            T3 [j] = temp ;
                        }
                }
        }

    printf ( "\n\t * The merged array in decending order is : " ) ;
    for ( int i = 0 ; i < size_T3 ; i ++ )
        {
            printf ( " %d " , *( T3 + i ) ) ;
        }

    printf ( "\n\n\n" ) ;

    return 0 ;
}