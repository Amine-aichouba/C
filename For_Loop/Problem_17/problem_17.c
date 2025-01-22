


#include <stdio.h>


int main ()
{
    int rows , j , i ;

    printf ( "\n\n\t * Give me the number of rows : " ) ;
    scanf ( " %d" , &rows ) ;

    for ( i = 1 ; i <= rows ; i ++ )
        {
            printf ( "\n\t" ) ;
            for ( j = 1 ; j <= rows ; j ++ )
                {
                    if ( j <= rows - i ) printf ( "  " ) ;
                    else
                        printf ( "  %d " , i ) ;
                }
        }
    printf ( "\n\n\n" ) ;

    return 0 ;
}