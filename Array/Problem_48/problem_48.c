

#include <stdio.h>

int main ()
{
    int arr [] = { 1 , 3 , 3 , 5 , 4 , 3 , 2 , 3 , 3 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int n = 3 ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , arr [i] ) ;

    printf ( "\n\n\t * The given value is : %d " , n ) ;
    int count = 0 ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            if ( arr [i] == n )
                count ++ ;
        }
    if ( count >= ( size / 2 ) )
        printf ( "\n\n\t * %d appears more than %d times in the given array [] " , n , size/2 ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;       
}
