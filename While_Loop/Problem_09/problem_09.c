


#include <stdio.h>


int main () 
{
    int num , reversed_num = 0 , original_num ;  

    printf ( "\n\n\t * Give ma a number : " ) ;
    scanf ( " %d" , &num ) ;  
    original_num = num ;  

    while ( num != 0 ) 
        {
            int remainder = num % 10 ;  
            reversed_num = reversed_num * 10 + remainder ; 
            num /= 10 ;  
        }

    if ( original_num == reversed_num ) 
        printf ( "\n\n\t  %d is a palindrome " , original_num ) ;
    else 
        printf ( "\n\n\t  %d is not a palindrome " , original_num ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;  
}
