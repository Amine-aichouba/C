/*
                1 → 2 → 3 → 4 → 5
                                ↓
            6 → 7 →  8  → 9     10
            ↑             ↓     ↓
            11  12 ← 13 ← 14    15
            ↑                   ↓
            16 ← 17 ← 18 ← 19 ← 20
*/


#include <stdio.h>

#define ROWS 4
#define COLS 5

void print_spiral ( int matrix [ROWS][COLS] ) 
{
    int top = 0 , bottom = ROWS - 1 ;
    int left = 0 , right = COLS - 1 ;

    printf ( "\n\n\t * The spiral form of the above matrix is : " ) ;
    while ( top <= bottom && left <= right ) 
        {
            for ( int i = left ; i <= right ; i ++ ) 
                printf ( " %d " , matrix [top][i] ) ;
            top ++ ;

            for ( int i = top ; i <= bottom ; i ++ ) 
                printf ( " %d " , matrix [i][right] ) ;
            right -- ;

            if ( top <= bottom ) 
                {
                    for ( int i = right ; i >= left ; i -- ) 
                        printf ( " %d " , matrix [bottom][i] ) ;
                    bottom-- ;
                }

            if ( left <= right ) 
                {
                    for ( int i = bottom ; i >= top ; i -- ) 
                        printf ( " %d " , matrix [i][left] ) ;
                    left ++ ;
                }
        }
}

int main () 
{
    int matrix [ROWS][COLS] = {
            { 1 , 2 , 3 , 4 , 5 } ,
            { 6 , 7 , 8 , 9 , 10 } ,
            { 11 , 12 , 13 , 14 , 15 } ,
            { 16 , 17 , 18 , 19 , 20 }
        } ;


    printf ( "\n\n\t * The given array in matrix form is : \n " ) ;
    for ( int i = 0 ; i < ROWS ; i ++ ) 
        {
            printf ( "\n\t\t " ) ;
            for ( int j = 0 ; j < COLS ; j ++ )     
                printf ( " %d " , matrix [i][j] ) ;
            printf ( "\n" ) ;
        }

    print_spiral ( matrix ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}