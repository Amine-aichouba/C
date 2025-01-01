


#include <stdio.h>  

int main () 
{
    int number , sum = 0 ; 

    printf ( "\n\n\t * Give me number of terms : " ) ; 
    scanf ( " %d" , &number ) ;
    
    printf ( "\n\n\t * The odd numbers are : " ) ;  

    for ( int i = 1 ; i <= number ; i ++ ) 
        {  
            printf ( " %d " , 2*i - 1 ) ;  
            sum += 2*i - 1 ;  
        }
    
    printf ( "\n\n\t * The Sum of odd Natural Number upto %d terms : %d " , number , sum ) ;  
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}

