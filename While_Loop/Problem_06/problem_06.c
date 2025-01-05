


#include <stdio.h>


int main ()
{
    int number , factorial = 1 ;

    printf ( "\n\n\t * Give me a positive number : " ) ;
    scanf ( " %d" , &number ) ;

    if ( number < 0 )
        {
            printf ( "\n\n\t * Error : Give me a positive number !! \n\n " ) ;
            return 1 ;
        }

    if ( number == 1 || number == 0 )
        {
            printf ( "\n\t * Factorial : 1 \n\n\n" ) ;
            return 0 ;
        }

    while ( number > 1 )
        {
            factorial *= number ;
            number -- ;  
        }

    printf ( "\n\t * Factorial : %d " , factorial ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
