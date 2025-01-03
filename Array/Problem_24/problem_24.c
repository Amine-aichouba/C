


#include <stdio.h>

#define LIMIT 50  

int main ()
{
    int M [LIMIT][LIMIT] , size ;

    printf ( "\n\t * Give me the size of the square matrix : " ) ;
    scanf ( " %d" , &size ) ;

    printf ( "\n" ) ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            for ( int j = 0 ; j < size ; j ++ )
                {
                    printf ( "\n\t * Give me M[%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ; 
                }
        }

    int sum = 0 ;
    for ( int i = 0 ; i < size ; i ++ )         
        sum += M [i][size - i - 1] ;    
        
    printf ( "\n\n\t * The matrix is : \n" ) ; 
    for ( int i = 0 ; i < size ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < size ; j ++ )
                printf ( " %d " , M[i][j] ) ;
        }

    printf ( "\n\n\t * Addition of the left Diagonal elements is : %d" , sum ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}

