


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

    int even [ LIMIT ] , odd [ LIMIT ] ;
    int ctr_even = 0 , ctr_odd = 0 ;

    for ( int i = 0 ; i < size ; i ++ )
        {  
            if ( T [i] % 2 == 0 )
                even [ ctr_even ++ ] = T[i] ;
            else 
                odd [ ctr_odd ++ ] = T [i] ;
        }

    printf ( " \n\n\t * The Odd elements are : " ) ;

    for ( int i = 0 ; i < ctr_odd ; i ++ ) 
        printf ( " %d " , odd [i] ) ;
    

    printf ( " \n\n\t * The Even elements are : " ) ;

    for ( int i = 0 ; i < ctr_even ; i ++ ) 
        printf ( " %d " , even [i] ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}