


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    char str [100] ;
    int length ;

    printf ( "\n\n\t * Give me a string in UPPERCASE : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    length = ( int ) strlen ( str ) ;

    for ( int i = 0 ; i < length ; i ++ )
        {
            if ( str [i] >= 'A' && str [i] <= 'Z' ) 
                str [i] -= 'A' - 'a' ; 
        }
    printf ( "\n\t * Here is the above string in lowercase : %s " , str ) ;
    printf ( "\n\n\n" ) ;  
    return 0 ;
}