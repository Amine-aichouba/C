


#include <stdio.h>

int power ( int val , int base )
{
    if ( base == 1 )  return val ;
    return  val * power ( val , base - 1 ) ;
}

int main ()
{
    int value , base ;

    printf ( "\n\n\t * Give me the value of power : " ) ;
    scanf ( " %d" , &value ) ;

    printf ( "\n\t * Give me the base value : " ) ; 
    scanf ( " %d" , &base ) ;
    
    if ( base <= 0 )  return 1 ; // Erour
     
    printf ( "\n\t * POWER ( %d , %d ) = %d " , value , base , power ( value , base ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}