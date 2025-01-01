


#include <stdio.h>

#define LIMIT 100

int main ()
{
    int M [LIMIT][LIMIT] , col_number , row_number , ctr = 0 ;

    printf ( "\n\t * Give me the number of columns of the matrix : " ) ;
    scanf ( " %d" , &col_number ) ;

    printf ( "\n\t * Give me the number of rows of the matrix :  " ) ;
    scanf ( " %d" , &row_number ) ;

    for ( int i = 0 ; i < row_number ; i ++ )
        {
            for ( int j = 0 ; j < col_number ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ; 
                    if ( M [i][j] == 0 )
                        ctr ++ ;
                }
        }

    printf ( "\n\n\t * The matrix is : \n" ) ; 
    for ( int i = 0 ; i < row_number ; i ++ )
        {
            printf ( "\n\t\t  " ) ;
            for ( int j = 0 ; j < col_number ; j ++ )
                printf ( " %d " , M [i][j] ) ;
        }
    
    if ( ctr > ( row_number * col_number ) / 2 )
        {
            printf ( "\n\n\t * The given matrix is sparse matrix ! " ) ;
            printf ( "\n\n\t * There are < %d > number of zeros in the matrix !! " , ctr ) ;
        }
        else 
            {
                printf ( "\n\n\t * The given matrix is NOT sparse matrix !! " ) ;
                printf ( "\n\n\t * There are < %d > number of zeros in the matrix !! " , ctr ) ;
            }

    printf ( "\n\n\n" ) ;

    return 0 ;
}
