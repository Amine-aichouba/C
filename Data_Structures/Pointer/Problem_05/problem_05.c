

#include <stdio.h>

int sum ( int* first_num , int* second_num )
{
    return *first_num + *second_num ; 
}

int main ()
{
    int first_num , second_num ;
    printf ( "\n\n\t * Give me the first number : " ) ;
    scanf ( " %d" , &first_num ) ;

    printf ( "\n\t * Give me the second number : " ) ;
    scanf ( " %d" , &second_num ) ;

    printf ( "\n\n\t * The sum of %d and %d is : %d " , first_num , second_num , sum ( &first_num , &second_num ) ) ;    
    printf ( "\n\n\n" ) ;

    return 0 ;
}