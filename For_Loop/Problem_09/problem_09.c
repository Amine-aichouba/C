

#include <stdio.h>


int main ()
{
    int rows ;

    printf ( "\n\n\t * Give me number of rows : " ) ;
    scanf ( " %d" , &rows ) ;

    for ( int i = 0 ; i < rows ; i ++ )
        {   
            printf ( "\n\t " ) ;
            for ( int j = 0 ; j < rows ; j ++ )
                if ( j <= i ) printf ( " • " ) ;
        }

    printf ( "\n\n\n" ) ;

    return 0 ;
}