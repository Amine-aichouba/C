


#include <stdio.h>


int main () 
{
    int n1 = 0 , n2 = 1 , next , count = 0 ;
    printf ( "\n\n\t * First 10 Fibonacci numbers : " ) ;
    
    while ( count < 10 ) 
        {
            if ( count <= 1 ) 
                next = count ;  
            else 
                {
                    next = n1 + n2 ;  
                    n1 = n2 ;  
                    n2 = next ;  
                }
        
            printf ( " %d " , next ) ;
            count ++ ;
        }
    
    printf( "\n\n\n" ) ; 
    return 0 ;
}
