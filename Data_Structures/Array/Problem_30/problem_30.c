


#include <stdio.h>

#define LIMIT 100

int main ()
{
    int M1 [LIMIT][LIMIT] , col_number_M1 , row_number_M1 ;
    int M2 [LIMIT][LIMIT] , col_number_M2 , row_number_M2 ;

    printf ( "\n\t * Give me the number of columns of the first matrix : " ) ;
    scanf ( " %d" , &col_number_M1 ) ;

    printf ( "\n\t * Give me the number of rows of the first matrix :  " ) ;
    scanf ( " %d" , &row_number_M1 ) ;

    printf ( "\n\n\t * The first matrix :  \n" ) ;
    for ( int i = 0 ; i < row_number_M1 ; i ++ )
        {
            for ( int j = 0 ; j < col_number_M1 ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M1 [i][j] ) ; 
                }
        }

    printf ( "\n\n\t * Give me the number of columns of the second matrix : " ) ;
    scanf ( " %d" , &col_number_M2 ) ;

    printf ( "\n\t * Give me the number of rows of the second matrix :  " ) ;
    scanf ( " %d" , &row_number_M2 ) ;

    printf ( "\n\n\t * The second matrix :  \n" ) ;
    for ( int i = 0 ; i < row_number_M2 ; i ++ )
        {
            for ( int j = 0 ; j < col_number_M2 ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M2 [i][j] ) ; 
                }
        }

    int equal = 1 ;
    if ( ( col_number_M1 == col_number_M2 ) && ( row_number_M1 == row_number_M2 ) )
        {
            for ( int i = 0 ; i < col_number_M1 ; i ++ )
                {
                    for ( int j = 0 ; j < row_number_M1 ; j ++ )
                        {
                            if ( M1 [i][j] != M2 [i][j] )
                                {
                                    equal = -1 ;
                                    break ;
                                }
                        }

                    if ( equal == -1 )
                        break ;
                }
        }
        else 
            equal = -1 ;

    printf ( "\n\n\t * The first matrix : \n" ) ;
    for ( int i = 0 ; i < row_number_M1 ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < col_number_M1 ; j ++ )
                printf ( "%2d" , M1 [i][j] ) ;
        }

    printf ( "\n\n\t * The second matrix : \n" ) ;
    for ( int i = 0 ; i < row_number_M2 ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < col_number_M2 ; j ++ )
                    printf ( "%2d" , M2 [i][j] ) ;
        }

    if ( equal == 1 )
        printf ( "\n\n\t * Two matrices are equal !!" ) ;
    else
        printf ( "\n\n\t * Two matrices not are equal !!" ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}