


#include <stdio.h>

int main ()
{
    int m = 10 , n , o ;
    int *z = &m ;

    printf ( "\n\n\t * Pointer : Show the basic declaration of pointer : " ) ;
    printf ( "\n\n\t -------------------------------------------------------" ) ;
    printf ( "\n\n\t * Here is < m = 10 > , < n > and < o > are two integer variable and < *z > is an integer " ) ;
    printf ( "\n\n\t  z stores the address of m  = %p " ,( void* )  z ) ; 
    printf ( "\n\n\t *z stores the value of m = %d " , *z ) ;
    printf ( "\n\n\t &m is the address of m = %p " , ( void* ) &m ) ; 
    printf ( "\n\n\t &n stores the address of n = %p " , ( void* ) &n ) ; 
    printf ( "\n\n\t &o  stores the address of o = %p " , ( void* ) &o ) ; 
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
