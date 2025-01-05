


#include <stdio.h>


int main ()
{
    int i = 1 , result = 1 ;
    while ( i <= 5 ) 
        {
            result *= i ;
            i ++ ;
        }
    printf ( "\n\n\t  1 × 2 × 3 × 4 × 5 = %d " , result ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}