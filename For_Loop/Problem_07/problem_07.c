

#include <stdio.h>  

int main () 
{
    int number ; 

    printf ( "\n\n\t * Give me upto the table number starting from 1 : " ) ;  
    scanf ( " %d" , &number ) ;   

    for ( int i = 1 ; i <= 10 ; ++ i ) 
        {
            printf ( "\n\n\t * Multiplication table number %d from 1 to %d \n" , i , number ) ;
            for ( int j = 1 ; j <= number ; ++ j )   
                printf ( "\n\t  %d × %d : %d " , i , j , i * j ) ;  
        }

    printf ( "\n\n\n" ) ;

    return 0 ; 
}
