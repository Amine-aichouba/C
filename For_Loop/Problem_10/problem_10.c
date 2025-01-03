



#include <stdio.h>


int main ()
{
    int rows ;

    printf ( "\n\n\t * Give me number of rows : " ) ;
    scanf ( " %d" , &rows ) ;

    for ( int i = 1 ; i <= rows ; i ++ )
        {   
            printf ( "\n\t " ) ;
            for ( int j = 1 ; j <= rows ; j ++ )
                if ( j <= i ) printf ( " %d " , j ) ;
        }

    printf ( "\n\n\n" ) ;

    return 0 ;
}