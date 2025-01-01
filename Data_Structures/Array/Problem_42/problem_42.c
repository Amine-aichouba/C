

#include <stdio.h>

int main ()
{
    int arr [] = { 0 , 1 , 3 , 4 , 5 , 6 , 7 , 9 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int missing_smallest_element ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            if ( i != arr [i] )
                {
                    missing_smallest_element = i ;
                    break ;
                }
        }

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d  " , arr [i] ) ;
    
    printf ( "\n\n\t * The missing smallest element is : %d " , missing_smallest_element ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}