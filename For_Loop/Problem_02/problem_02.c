


#include <stdio.h>


int main ()
{
    int sum = 0 ;
    printf ( "\n\n\t * The first 10 natural number is : " ) ;
    for ( int i = 1 ; i <= 10 ; i ++ )
        {
            printf ( " %d " , i ) ;
            sum += i ;
        }
    printf ( "\n\n\t * The Sum is : %d" , sum ) ;
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}