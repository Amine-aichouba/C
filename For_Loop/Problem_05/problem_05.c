

#include <stdio.h>


int main ()
{
    int number_terms , power ;

    printf ( "\n\n\t * Give me number of terms : " ) ;
    scanf ( " %d" , &number_terms ) ;

    for ( int i = 1 ; i <= number_terms ; i ++ )
        {
            power = 1 ;
            for ( int j = 1 ; j <= 3 ; j ++ ) power *= i ; 
            printf ( "\n\n\t * Number is : %d and cube of the %d is : %d " , i , i , power ) ;
        }
    printf ( "\n\n\n" ) ;

    return 0 ;
}