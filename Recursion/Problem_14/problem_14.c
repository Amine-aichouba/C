


#include <stdio.h>


void odd_and_even ( int range , int i )
{
    if ( i > range )  return ;
    printf ( " %d " , i ) ;
    odd_and_even ( range , i + 2 ) ; 
}

int main ()
{
    int range ;

    printf ( "\n\n\t * Give me the range to print starting from 1 : " ) ;
    scanf ( " %d" , &range ) ;

    printf ( "\n\t * All even numbers from 1 to %d are :" , range ) ;
    odd_and_even ( range , 2 ) ;
    printf ( "\n\n\t * All odd numbers from 1 to %d are :" , range ) ;
    odd_and_even ( range , 1 ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}