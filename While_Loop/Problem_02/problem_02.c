


#include <stdio.h>
#include <stdbool.h>


 int main () 
 {
    int number , sum = 0 ;  

    printf ( "\n\n\t * integers ( enter 0 to stop ) : " ) ;

    while ( true ) 
        {
            printf ( "\n\n\t * Give me a number : " ) ;
            scanf ( " %d" , &number ) ; 

            if ( number == 0 )  break ; 
            if ( number > 0 ) sum += number ; 
        }

    printf ( "\n\n\t * Sum of positive integers : %d " , sum ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;  
}

