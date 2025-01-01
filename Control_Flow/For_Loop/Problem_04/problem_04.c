

#include <stdio.h>


int main ()
{
    float number , sum = 0 , average ;

    for ( int i = 1 ; i <= 10 ; i ++ )
        {
            printf ( "\n\t * Number %d : " , i ) ;
            scanf ( " %f" , &number ) ;
            sum += number ;
        }

    average = sum / 10 ;
    
    printf ( "\n\n\t * The sum of 10 no is : %.2f " , sum ) ;
    printf ( "\n\n\t * The Average is : %.2f " , average ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}