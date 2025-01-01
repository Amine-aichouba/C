


#include <stdio.h>
 

int check_armstrong ( int number ) 
{
    int ld , sum , num ;
    sum = 0 ;
    num = number ;
    while ( num != 0 )  
        {  
            ld = num % 10 ;  
            sum += ld * ld * ld ; 
            num /= 10 ;  
        }
    return ( number == sum ) ;
}


int check_perfect ( int number ) 
{
    int i , sum , num ;
    sum = 0 ;
    num = number ;
    for ( i = 1 ; i < num ; i ++ )  
        if ( num % i == 0 )  sum += i ;
    
    return ( number == sum ) ;
}



int main ()
{
    int number ;
    printf ( "\n\n\t * Give me any number : " ) ;
    scanf ( " %d" , &number ) ;
     
    if ( check_armstrong ( number ) )
        printf ( "\n\n\t * The %d is an Armstrong number " , number ) ;
    else
        printf ( "\n\n\t * The %d is not an Armstrong number " , number ) ;
     
    if ( check_perfect ( number ) )
        printf ( "\n\n\t * The %d is a Perfect number." , number ) ;
    else    
        printf ( "\n\n\t * The %d is not a Perfect number " , number ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}
