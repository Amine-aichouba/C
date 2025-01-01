/*
                
            |  a  b  c  | 
        M = |  d  e  f  | 
            |  g  h  i  | 

 det ( M ) = a ( ei − fh ) − b ( di − fg ) + c ( dh − eg )
 
 */

#include <stdio.h>

int main ()
{
    int M [3][3] , det = 0 ;

    printf ( "\n\t * Input elements in the first matrix : \n " ) ;
    for ( int i = 0 ; i < 3 ; i ++ )
        {
            for ( int j = 0 ; j < 3 ; j ++ )
                {
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ; 
                }
        }

    printf ( "\n\n\t * The matrix is : \n" ) ; 
    for ( int i = 0 ; i < 3 ; i ++ )
        {
            printf ( "\n\t\t  " ) ;
            for ( int j = 0 ; j < 3 ; j ++ )
                printf ( " %d " , M [i][j] ) ;
        }

    det  = M [0][0] * ( ( M [1][1] * M [2][2] ) - ( M [1][2] * M [2][1] ) ) ;
    det -= M [0][1] * ( ( M [1][0] * M [2][2] ) - ( M [1][2] * M [2][0] ) ) ; 
    det += M [0][2] * ( ( M [1][0] * M [2][1] ) - ( M [1][1] * M [2][0] ) ) ;

    printf ( "\n\n\t * The Determinant of the matrix is : %d " , det ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
