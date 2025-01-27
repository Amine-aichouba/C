


#include <stdio.h>

#define MAX 10


void multiply_matrices ( int first [MAX][MAX] , int second [MAX][MAX] , int result [MAX][MAX] , int row , int col , int k ) 
{
   
    if ( k >= col )  return ;

    if ( row >= MAX ) return ;
        
    result [row][k] = 0 ;
    for ( int j = 0 ; j < col ; j ++ ) 
        result [row][k] += first [row][j] * second [j][k] ;
    
    if ( row < MAX - 1 ) 
        multiply_matrices ( first , second , result , row + 1 , col , k ) ;
    else 
        multiply_matrices ( first , second , result , 0 , col , k + 1 ) ;
}



int main () 
{
    int first [MAX][MAX] , second [MAX][MAX] , result [MAX][MAX] ;
    int r1 , c1 , r2 , c2 , i , j ;

    printf ( "\n\n\t * Give me number of rows for the first matrix : " ) ;
    scanf ( " %d" , &r1 ) ;
    printf ( "\n\t * Give me number of columns for the first matrix : " ) ;
    scanf ( " %d" , &c1 ) ;

    printf ( "\n\n\t * Give me elements in the first matrix : \n " ) ;
    for ( i = 0 ; i < r1 ; i ++ ) 
        {
            for ( j = 0 ; j < c1 ; j ++ ) 
                {
                    printf ( "\n\t * Element (%d)(%d) : " , i , j ) ;
                    scanf ( " %d" , &first [i][j] ) ;
                }
        }
 
    printf ( "\n\n\t * Give me number of rows for the second matrix : " ) ;
    scanf ( " %d" , &r2 ) ;
    printf ( "\n\t * Give me number of columns for the second matrix : " ) ;
    scanf ( " %d" , &c2 ) ;

    printf ( "\n\n\t * Give me elements in the second matrix :\n" ) ;
    for ( i = 0 ; i < r2 ; i ++ ) 
        {
            for ( j = 0 ; j < c2 ; j ++ ) 
                {
                    printf ( "\n\t * Element (%d)(%d) : " , i , j ) ;
                    scanf ( " %d" , &second [i][j] ) ;
                }
        }

    if ( c1 != r2 ) 
        {
            printf ( "\n\n\t * Matrix multiplication is not possible.\n\n" ) ;
            return 1 ;
        }

    for ( i = 0 ; i < r1 ; i ++ ) 
        for ( j = 0 ; j < c2 ; j ++ )  result[i][j] = 0 ;       
    
    multiply_matrices ( first , second , result , 0 , c2 , 0 ) ;

    printf ( "\n\n\t * Here is the elements of First matrix :\n " ) ;
    for ( i = 0 ; i < r1 ; i ++ ) 
        {
            printf ( "\n\t" ) ;
            for ( j = 0 ; j < c1 ; j ++ ) 
                printf ( " %d " , first [i][j] ) ;  
        }

    printf ( "\n\n\t * Here is the elements of Second matrix :\n" ) ;
    for ( i = 0 ; i < r2 ; i ++ ) 
        {
            printf ( "\n\t" ) ;
            for ( j = 0 ; j < c2 ; j ++ ) 
                printf ( " %d " , second [i][j] ) ;
        }

    printf ( "\n\n\t * The multiplication of two matrix is :\n" ) ;
    for ( i = 0 ; i < r1 ; i ++ ) 
        {
            printf ( "\n\t" ) ;
            for ( j = 0 ; j < c2 ; j ++ ) 
                printf ( " %d " , result [i][j] ) ;
        }
    printf ( "\n\n\n" ) ;
    return 0 ;
}