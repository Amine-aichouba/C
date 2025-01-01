


#include <stdio.h>

int main ()
{
    int M [3][3] ;

    for ( int i = 0 ; i < 3 ; i ++ ) 
        {
            for ( int j = 0 ; j < 3 ; j ++ )
                {
                    printf ( "\n\t * Give me T[%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ;
                }
        }

    printf ( "\n\n\t * The matrix is : \n" ) ;
    for ( int i = 0 ; i < 3 ; i ++ ) 
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < 3 ; j ++ )
                printf ( " %d " , M[i][j] ) ;
        }
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}