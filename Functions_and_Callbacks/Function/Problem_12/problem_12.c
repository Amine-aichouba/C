

#include <stdio.h>
#include <stdbool.h>


int maximum ( int val_1 , int val_2 )
{
    return ( val_1 > val_2 ) ? val_1 : val_2 ;
}

int minimum ( int val_1 , int val_2 )
{
    return ( val_1 < val_2 ) ? val_1 : val_2 ;
}

int main ()
{
    int val , max = 0 , min = 0 ;

    for ( int i = 0 ; i < 5 ; i ++ )
        {
            printf ( "\n\t * Give me the value %d : " , i+1 ) ;
            scanf ( " %d" , &val ) ;
            max = maximum ( val , max ) ;
            min = minimum ( val , min ) ;
        }
    
    printf ( "\n\n\t * Minimum value is : %d " , min ) ;
    printf ( "\n\n\t * Maximum value is : %d " , max ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}
