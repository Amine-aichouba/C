

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

    int left_counter = 0 , right_counter = size - 1 ;

    for ( int i = 0 ; i < size / 2 ; i ++ )
        {
            int temp = *( T + left_counter ) ; 
            *( T + left_counter ) = *( T + right_counter ) ; 
            *( T + right_counter ) = temp ; 
            
            left_counter ++ ;
            right_counter -- ;
        }


    printf ( "\n\n\t * T : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , *( T + i ) ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}