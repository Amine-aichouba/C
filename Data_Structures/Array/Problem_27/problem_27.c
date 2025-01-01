

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
                    printf ( "\n\t * Give me M [%d][%d] : " , i+1 , j+1 ) ;
                    scanf ( " %d" , &M[i][j] ) ; 
                }
        }

    printf ( "\n\n\t * Setting zero in upper triangular matrix : \n" ) ; 
    for ( int i = 0 ; i < size ; i ++ )
        {
            printf ( "\n\t\t\t  " ) ;
            for ( int j = 0 ; j < size ; j ++ )
                {
                    if ( i < j )   
                        M [i][j] = 0 ;
                        
                    printf ( " %d " , M[i][j] ) ;
                }
        }

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
