


#include <stdio.h>
#include <string.h>

int main ()
{
    char str [100] ;
    int length ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    length = ( int ) strlen ( str ) ;
    if ( length > 0 && str [length - 1] == '\n' )
        {
            str [length - 1] = '\0' ;
            length -- ;
        }

    printf ( "\n\n\t * The given sentence is : %s " , str ) ;

    for ( int i = 0 ; i < length ; i ++ )
        {
            if ( str [i] >= 'A' && str [i] <= 'Z' ) 
                str [i] = str [i] + 'a' - 'A' ;
            else   
                if ( str [i] >= 'a' && str [i] <= 'z' ) 
                    str [i] = str [i] - 'a' + 'A' ;
        }

    printf ( "\n\n\t * After Case changed the string is : %s " , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}