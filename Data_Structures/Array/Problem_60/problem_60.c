

#include <stdio.h>

#define ROWS 5
#define COLS 5

int row_with_max ( int arr [ROWS][COLS] , int rows , int cols ) 
{
    int max_row_index = -1 , max_count = 0 , count ;
    
    for ( int i = 0 ; i < rows ; i ++ ) 
        {
            count = 0 ;
            for ( int j = 0 ; j < cols ; j ++ ) 
                if ( arr [i][j] == 1 )  count ++ ;

            if ( count > max_count ) 
                {
                    max_count = count ;
                    max_row_index = i ;
                }
        }

    return max_row_index ;
}

int main () 
{
    int arr [ROWS][COLS] = 
        {
            {  0 , 1 , 0 , 1 , 1 } ,
            {  1 , 1 , 1 , 1 , 1 } ,
            {  1 , 0 , 0 , 1 , 0 } ,
            {  0 , 0 , 0 , 0 , 0 } ,
            {  1 , 0 , 0 , 0 , 1 } 
        } ;

    printf ( "\n\n\t * The given 2D array is : \n" ) ;
    for ( int i = 0 ; i < ROWS ; i ++ )  
        {
            printf ( " \n\t\t\t\t " ) ;
            for ( int j = 0 ; j < COLS ; j ++ )  printf ( " %d " , arr [i][j] ) ;
        }

    int max_row_index = row_with_max ( arr , ROWS , COLS ) ;
    printf ( "\n\n\t * The index of the row with the maximum number of 1s is : %d " , max_row_index ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}
