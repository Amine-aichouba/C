

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

    int sum = 0 ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            sum += T [i] ;
        }
         
    printf ( "\n\n\t * The sum of the  elements is : %d " , sum ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}