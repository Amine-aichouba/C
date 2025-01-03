


#include <stdio.h>

#define LIMIT 50

int main ()
{
    int M [LIMIT][LIMIT] , M1 [LIMIT][LIMIT] , row_size , column_size ;

    
    printf ( "\n\t * Give me the size of the columns : " ) ;
    scanf ( " %d" , &column_size ) ;

    printf ( "\n\t * Give me the size of the rows : " ) ;
    scanf ( " %d" , &row_size ) ;

    for ( int i = 0 ; i < row_size ; i ++ )
        {
            for ( int j = 0 ; j < column_size ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ;
                }
        }

    printf ( "\n\n\t * The matrix is : \n" ) ;
    for ( int i = 0 ; i < row_size ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < column_size ; j ++ )
                printf ( " %d " , M[i][j] ) ;
        }

    for ( int i = 0 ; i < column_size ; i ++ )
        {
            for ( int j = 0 ; j < row_size ; j ++ )
                M1[i][j] = M[j][i] ;
        }

    printf ( "\n\n\t 🖝  The transpose of a matrix is : \n" ) ;
    for ( int i = 0 ; i < column_size ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < row_size; j ++ )
                printf ( " %d " , M1[i][j] ) ;
        }

    printf ( "\n\n\n" ) ;

    return 0 ;
}