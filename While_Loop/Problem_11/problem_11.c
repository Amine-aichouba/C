


#include <stdio.h>

int main () 
{
    int num , i = 1 ;

    printf ( "\n\n\t * Give me a positive integer : " ) ;
    scanf ( " %d" , &num ) ;

    printf ( "\n\t * Multiplication table for %d : " , num ) ;
    
    while ( i <= 10 ) 
        {
            printf ( "\n\n\t %d × %d : %d" , num , i , num * i ) ;
            i ++ ;
        }
    printf ( "\n\n\n" ) ;
    return 0 ;
}
