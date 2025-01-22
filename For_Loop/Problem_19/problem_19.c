


#include <stdio.h> 


int main ()
{
    int i , n ;      
    float s = 0.0 ;

    printf ( "\n\n\t * Give me the number of terms : " ) ;
    scanf ( " %d" , &n ) ;  

    printf ( " \n\n\t " ) ; 

    for ( i = 1 ; i <= n ; i ++ )
        {      
            printf ( " ( 1/%d )" , i ) ; 
            if ( i < n )  printf ( " + " ) ;
            s +=  1 / ( float ) i ;       
        }

    printf ( "\n\n\t * Sum of Series upto %d terms : %.2f " , n , s ) ;
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
