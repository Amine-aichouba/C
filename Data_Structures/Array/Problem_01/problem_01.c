

#include <stdio.h>

int main ()
{
    int T [10] ;

    for ( int i = 0 ; i < 10 ; i ++ ) 
        {
            printf ( "\n\t * Give me T [%d] : " , i + 1 ) ;
            scanf ( " %d" , ( T + i ) ) ; // ( T + i ) ==  &T[i]
        }

    printf ( "\n\n\t *  T : " ) ;
    for ( int i = 0 ; i < 10 ; i ++ )
        printf ( " %d " , *( T + i ) ) ;
    
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
