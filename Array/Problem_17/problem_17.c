


#include <stdio.h>

#define LIMIT 100

int main() 
{
    int T [LIMIT] , size ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( "%d" , &size ) ;

    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t * Give me T[%d] : " , i+1 ) ;
            scanf ( "%d" , &T[i] ) ;
        }

    int min = T [0] ;
    int second_min = __INT_MAX__ ; 

    for ( int i = 0 ; i < size ; i ++ ) 
    {
        if ( T [i] < min ) 
        {
            second_min = min ;
            min = T [i] ;
        }
        else 
            if ( T [i] < second_min && T [i] != min ) 
                second_min = T[i] ;
        
    }

    printf ( "\n\n\t * The Second smallest element in the array is : %d" , second_min ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}
