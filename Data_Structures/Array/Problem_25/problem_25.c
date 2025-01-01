

#include <stdio.h>

#define LIMIT 50

int main ()
{
    int M [LIMIT][LIMIT] , row_sum [LIMIT] , col_sum [LIMIT] ;
    int  size , rsum , csum , t = 0 , k = 0 ;

    printf ( "\n\t * Give me the size of the square matrix : " ) ;
    scanf ( " %d" , &size ) ;

    printf ( "\n" ) ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            for ( int j = 0 ; j < size ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ;
                }
        }

    for ( int i = 0 ; i < size ; i ++ )
        {
            rsum = 0 ; csum = 0 ;
            for ( int j = 0 ; j < size ; j ++ )
                {
                    csum += M [i][j] ;
                    rsum += M [j][i] ;
                }

            row_sum [t ++] = rsum ; 
            col_sum [k ++] = csum ;
        }
        
    printf ( "\n\n\t * The matrix is : \n" ) ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < size ; j ++ )
                printf ( " %2d " , M[i][j] ) ;
            printf ( "%4d" , col_sum [i] ) ;
        }

    printf ( "\n\n\t\t\t  " ) ;
    for ( int i = 0 ; i < k ; i ++ )
        printf ( " %2d " , row_sum [i] ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}