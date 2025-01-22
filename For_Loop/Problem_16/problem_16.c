


#include <stdio.h>


int main ()
{
    int term , i , sum = 0 ;

    printf ( " \n\n\t * Give me number of terms : " ) ;
    scanf ( " %d" , &term ) ;
    
    printf ( "\n\n\t * The even numbers are :" ) ;
    for ( i = 2 ; i <= term*2 ; i += 2 )
        {
            printf ( " %d" , i ) ;
            sum += i ;
        }
    printf ( "\n\n\t * The Sum of even Natural Number upto %d terms : %d " , term , sum ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}