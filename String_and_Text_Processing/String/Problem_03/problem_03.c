

#include <stdio.h>


int main () 
{
    char str [100] ;
    int i = 0 ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    printf ( "\n\t * The characters of the string are : " ) ;
    while ( str [i] != '\n' )
        {
            printf ( " %c " , str [i] ) ;
            i ++ ;
        }
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}