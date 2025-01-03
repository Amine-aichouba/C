

#include <stdio.h>

int main ()
{
    int arr [] = { 3 , 4 , -7 , 1 , 3 , 3 , 1 , -4 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int sum ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf(" %d ", arr [i] ) ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            sum  = 0 ;
            for ( int j = i ; j < size ; j ++ )
                {
                    sum += arr [j] ;  
                    if ( sum == 7 )
                        {
                            printf ( "\n\n\t * [ %d --> %d ] : { " , i , j ) ;
                            for ( int k = i ; k <= j ; k ++ )
                                printf ( " %d " , arr [k] ) ;
                            printf ( " } " ) ;
                        }
                }
        }

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}