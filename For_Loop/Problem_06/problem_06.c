


#include <stdio.h> 

int main () 
{
    int number ;

    printf ( "\n\n\t * Give me the number ( Table to be calculated ) : " ) ;
    scanf ( " %d" , &number ) ;  

    for ( int j = 1 ; j <= 10 ; j ++ ) 
        printf ( "\n\n\t   %d × %d = %d " , number , j , number*j ) ;  

    printf ( "\n\n\n" ) ;
    return 0 ;
}
