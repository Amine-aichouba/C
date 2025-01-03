

#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int n ;
    float* elements ;

    printf ( "\n\n\t * Give me total number of elements ( 1 to 100 ) : " ) ;
    scanf ( " %d" , &n ) ;

    elements = ( float* ) malloc ( ( size_t ) n * sizeof ( float ) ) ;

    if ( elements == NULL ) 
        {
            printf ( "\n\n\t * Memory not allocated !! " ) ;
            return 1 ;
        }

    for ( int i = 0 ; i < n ; ++ i )  
        {
            printf ( "\n\t * Number %d : " , i+1 ) ;
            scanf ( " %f" , &elements [i] ) ;
        }

    float largest = elements [0] ;
    for ( int i = 1 ; i < n ; ++ i ) 
        if ( elements [i] > largest ) largest = elements [i] ;
                
    printf ( "\n\n\t * The Largest element is : %.2f " , largest ) ;
    printf ( "\n\n\n" ) ;

    free ( elements ) ;

    return 0 ;
}
