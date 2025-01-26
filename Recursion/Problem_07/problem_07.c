


#include <stdio.h>


int pgcd ( int first_num , int second_num )
{
    if ( second_num == 0 )  return first_num ;
    return pgcd ( second_num , first_num % second_num ) ;
}

int main ()
{
     int first_num , second_num ;
    
    printf ( "\n\n\t * Give me 1st number : " ) ;
    scanf ( " %d" , &first_num ) ;
  
    printf ( "\n\t * Give me 2nd number : " ) ;
    scanf ( " %d" , &second_num ) ;
    
    int result = pgcd ( first_num , second_num ) ;

    printf ( "\n\n\t * PGCD ( %d , %d ) = %d " , first_num , second_num , result ) ;
    printf ( "\n\n\n" ) ; 
    return 0 ;
}