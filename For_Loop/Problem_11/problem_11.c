


#include <stdio.h>


int main ()
{
    int i , j , rows ;

    printf ( "\n\n\t * Give me the number of rows : " ) ;
    scanf ( " %d" , &rows ) ;

    for ( i = 1 ; i <= rows ; i ++ )
        {
            printf ( "\n\t" ) ;
            for ( j = 1 ; j <= i ; j ++ )  printf ( " %d " , i ) ;
        }
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
