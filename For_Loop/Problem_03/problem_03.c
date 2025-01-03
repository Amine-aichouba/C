


#include <stdio.h>  

int main () 
{
    int val , sum = 0 ; 

    printf ( "\n\n\t * Give me Value of terms : " ) ; 
    scanf ( " %d" , &val ) ;  

    printf ( "\n\n\t * The first %d natural numbers are : " , val ) ;  

    for ( int i = 1 ; i <= val ; i ++ ) 
        {  
            printf ( " %d " , i ) ;  
            sum += i ;  
        }

    printf ( "\n\n\t * The Sum of natural numbers upto %d terms : %d " , val , sum ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}