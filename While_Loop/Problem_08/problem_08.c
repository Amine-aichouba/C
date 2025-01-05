


#include <stdio.h>


int main () 
{
    int limit = 20 , num = 2 , sum = 0 ; 
      
    while ( num <= limit ) 
        {
            int cube = num * num * num ;
            sum += cube ;
            num += 2 ;
        }
    
    printf ( "\n\n\t * Sum of cubes of even numbers up to %d : %d " , limit , sum ) ;
    printf ( "\n\n\n" ) ;
    return 0 ; 
}
