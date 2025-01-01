/*
       * Identity Matrix :

        |  1  0  0  ...  0  |
        |  0  1  0  ...  0  |
    I = |  0  0  1  ...  0  |
        |           ...     |
        |  0  0  0  ...  1  |
*/

#include <stdio.h>

#define LIMIT 100 

int main ()
{
    int M [LIMIT][LIMIT] , col_number , row_number ;
    int is_identity_matrix = 1 ;

    printf ( "\n\t * Give me the number of columns of the matrix : " ) ;
    scanf ( " %d" , &col_number ) ;

    printf ( "\n\t * Give me the number of rows of the matrix :  " ) ;
    scanf ( " %d" , &row_number ) ;

    printf ( "\n\n\t * The matrix :  \n" ) ;
    for ( int i = 0 ; i < row_number ; i ++ )
        {
            for ( int j = 0 ; j < col_number ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M [i][j] ) ; 
                }
        } 

    is_identity_matrix = 0 ;
    if ( col_number == row_number )
        {
            for ( int i = 0 ; i < row_number ; i ++ )
                {
                    for ( int j = 0 ; j < col_number ; j ++ )
                        {
                            if ( ( i == j && M [i][j] != 1 ) || ( i != j && M [i][j] != 0 ) )
                                {
                                    is_identity_matrix = - 1 ;
                                    break ;
                                }
                        }

                    if ( is_identity_matrix == -1 )
                        break ;
                }
        }
        else 
            is_identity_matrix = - 1 ;

    printf ( "\n\n\t * The matrix : \n" ) ;
    for ( int i = 0 ; i < row_number ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < col_number ; j ++ )
                printf ( "%3d" , M [i][j] ) ;
        }
    
    if ( is_identity_matrix == 1 )
        printf ( "\n\n\t * The matrix is an identity matrix !!" ) ;
    else
        printf ( "\n\n\t * The matrix is not an identity matrix !!" ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}
