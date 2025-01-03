


#include <stdio.h>

#define LIMIT 100

int main () 
{
    int T [LIMIT] , size ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( "%d" , &size ) ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t * Give me T[%d] : " , i+1 ) ;
            scanf ( "%d" , &T[i] ) ;
        }

    int max = T[0] ;
    int second_max = __WINT_MIN__ ; 

    for ( int i = 1 ; i < size ; i ++ ) 
        {
            if ( T[i] > max ) 
                {
                    second_max = max ;
                    max = T[i] ;
                } 
                else 
                    if ( T[i] > second_max && T[i] != max ) 
                        second_max = T[i] ;
        }

    printf ( "\n\n\t * The Second largest element in the array is : %d" , second_max ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}
