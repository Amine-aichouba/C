


#include <stdio.h>  


int main ()
{
    float x , sum , t , d ;  
    int i , n ;  

    printf ( "\n\n\t * Give me the Value of x : " ) ;
    scanf ( " %f" , &x ) ; 

    printf ( "\n\t * Give me the number of terms : " ) ;
    scanf ( " %d" , &n ) ;

    sum = 1 ; t = 1 ; 
      
    for ( i = 1 ; i < n ; i ++ )
        {
            d = ( float ) ( ( 2 * i ) * ( 2 * i - 1 ) ) ;  
            t = -t * x * x / d ;      
            sum = sum + t ;       
        }

    printf ( "\n\t * Value of x : %.0f" , x ) ;
    printf ( "\n\n\t * Number of terms : %d" , n ) ;
    printf ( "\n\n\t * The sum : %.2f \n\n\n " , sum ) ;
    
    return 0 ;
}
