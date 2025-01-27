


#include <stdio.h>


int pgcd ( int a , int b ) 
{
    if ( b == 0 ) return a ;
    return pgcd ( b , a % b ) ;
}

int ppcm ( int a, int b ) 
{
    return ( a * b ) / pgcd ( a , b ) ;
}

int main () 
{
    int first_num , second_num , result ;

    printf ( "\n\n\t * Give me the first number : " ) ;
    scanf ( " %d" , &first_num ) ;

    printf ( "\n\t * Give me the second number : " ) ;
    scanf ( " %d" , &second_num ) ;
    
    result = ppcm ( first_num , second_num ) ;

    printf ( "\n\t * PPCM ( %d , %d ) = %d " , first_num , second_num , result ) ;
    printf ( "\n\n\n" ) ;
    return 0;
}