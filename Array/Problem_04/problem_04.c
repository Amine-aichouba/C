

#include <stdio.h>

#define LIMIT 100

int main ()
{
    int T [ LIMIT ] , G [ LIMIT ] , size ;

    printf ( "\n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;


    for ( int i = 0 ; i < size ; i ++ ) 
        {
            printf ( "\n\t * Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; 
        }

    for ( int i = 0 ; i < size ; i ++ )
        {
            G [i] = T[i] ;
        }

    printf ( "\n\n\t * The elements stored in the first array are : " ) ;

    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , *( T + i ) ) ;
    

    printf ( "\n\n\t * The elements copied into the second array are : " ) ;

    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , *( G + i ) ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}