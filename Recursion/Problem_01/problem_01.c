

#include <stdio.h>


void print_natural_num ( int number )
{
    if ( number <= 50 ) 
        {
            printf ( " %d " , number ) ;
            print_natural_num ( number + 1 ) ;
        }
}

int main ()
{
    int number = 1 ;
    printf ( "\n\n\t * The natural numbers are : " ) ;
    print_natural_num ( number ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}