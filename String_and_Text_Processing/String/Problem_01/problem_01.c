

#include <stdio.h>


int main ()
{
    char str [50] ;
    
    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;

    printf ( "\n\t * The string you entered is : %s " , str ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}