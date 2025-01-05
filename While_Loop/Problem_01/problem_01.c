


#include <stdio.h>


int main ()
{
    int i = 0 ;

    printf ( "\n\n\t * 1 to 10 : " ) ;
    while ( i <= 10 )
        {
            printf ( " %d " , i ) ;
            i ++ ;
        }

    printf ( "\n\n\t * 10 to 0 : " ) ;
    while ( i > 0 )
        {
            i -- ;
            printf ( " %d " , i ) ;
        }

    printf ( "\n\n\n" ) ;
    return 0 ;
}