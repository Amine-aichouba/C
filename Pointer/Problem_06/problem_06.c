

#include <stdio.h>


int main ()
{
    int first_num , second_num ;
    int* ptr1 = &first_num ;
    int* ptr2 = &second_num ;
    
    printf ( "\n\n\t * Give me the first number : " ) ;
    scanf ( " %d" , &first_num ) ;

    printf ( "\n\t * Give me the second number : " ) ;
    scanf ( " %d" , &second_num ) ;

    printf ( "\n\n\t * %d is the maximum number " , ( *ptr1 > *ptr2 ) ? *ptr1 : *ptr2 ) ;    
    printf ( "\n\n\n" ) ;

    return 0 ;
}