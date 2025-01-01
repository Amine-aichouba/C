


#include <stdio.h>

int main ()
{
    int arr [] = { 0 , 3 , 6 , 9 , 12 , 14 , 18 , 20 , 22 , 25 , 27 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    
    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d  " , arr [i] ) ;
    
    printf ( "\n\n\t * From 4th position the values of the array are : " ) ;
    for ( int i = 3 ; i < size ; i ++ )
        printf ( " %d  " , arr [i] ) ;

    printf ( "\n\n\t * Before 4th position the values of the array are : " ) ;
    for ( int i = 0 ; i < 4  ; i ++ )
        printf ( " %d  " , arr [i] ) ;
    
    size += 4 ;
    int k = 0 , j = 0 ;
    for ( int i = 4 ; i < size ; i ++ )
        {
            if ( k < 4 )
                arr [size - i] = arr [k ++] ;
            arr [j ++] = arr [i] ;  
        }

    printf ( "\n\n\t * After rotating from 4th position the array is : " ) ;
    for ( int i = 0 ; i < 4  ; i ++ )
        printf ( " %d  " , arr [i] ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}