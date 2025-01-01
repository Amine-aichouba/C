

#include <stdio.h>

int main ()
{
    int first_number , second_number , *ptr1 , *ptr2 ;
    
    ptr1 = &first_number ;
    ptr2 = &second_number ;
    
    printf ( "\n\n\t * Give me the first number : " ) ;
    scanf ( " %d" , &first_number ) ;

    printf ( "\n\t * Give me the second number : " ) ;
    scanf ( " %d" , &second_number ) ;

    printf ( "\n\n\t * The sum of the entered numbers is : %d " , *ptr1 + *ptr2 ) ;
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}