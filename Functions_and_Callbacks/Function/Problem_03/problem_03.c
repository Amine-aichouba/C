


#include <stdio.h>

void swap ( int *first_number , int *second_number )
{
    int buffer = *first_number ;
    *first_number = *second_number ;
    *second_number = buffer ;
}

int main ()
{
    int first_number , second_number ;

    printf ( "\n\n\t * Give me the first number : " ) ;
    scanf ( " %d" , &first_number ) ;

    printf ( "\n\t * Give me the second number : " ) ;
    scanf ( " %d" , &second_number ) ;

    printf ( "\n\t * Before swapping : " ) ;
    printf ( "\n\n\t\t\t * First number : %d " , first_number ) ;
    printf ( "\n\n\t\t\t * Second number : %d " , second_number ) ;
    
    swap ( &first_number , &second_number ) ;

    printf ( "\n\n\t * After swapping :" ) ;
    printf ( "\n\n\t\t\t * First number : %d " , first_number ) ;
    printf ( "\n\n\t\t\t * Second number : %d " , second_number ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}  