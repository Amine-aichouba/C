


#include <stdio.h> 


int main ()
{
    int i , j , n ; 

    printf ( "\n\n\t * Give me number of rows for this pattern : " ) ;
    scanf ( " %d" , &n ) ;

    for ( i = 0 ; i < n ; i ++ ) 
        {
            printf ( "\n\t" ) ; 
            for ( j = 1 ; j <= n - i ; j ++ )  printf ( "   " ) ;
            for ( j = 1 ; j <= 2 * i - 1 ; j ++ )  printf ( " * " ) ;    
        }
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
