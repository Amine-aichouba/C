


#include <stdio.h>

int main ()
{
    int arr [] = { 1 , 3 , 3 , 7 , 4 , 3 , 2 , 3 , 3 } ;
    int size = ( int ) ( sizeof (arr) / sizeof ( arr [0] ) ) ;
    int index , count , buffer ;

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d " , arr [i] ) ;

    count = 0 ; buffer = 0 ;    
    for ( int i = 0 ; i < size ; i ++ )
        {
            for ( int j = 0 ; j < size ; j ++ )
                {
                    if ( arr [i] == arr [j] )
                        count ++ ;
                }
            if ( count > size / 2 ) 
                {
                    index = i ;
                    break ;
                }
            if ( count > buffer )
                {
                    index = i ;
                    buffer = count ;
                }
        }

    printf ( "\n\n\t * The majority of the Element : %d" , arr [index] ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;       
}