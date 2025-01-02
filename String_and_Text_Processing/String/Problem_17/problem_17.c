


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] ;
    int length ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    length = ( int ) strlen ( str ) ;
    
    int k = 0 ;
    for ( int i = 0 ; i < length ; i ++ )
        {
            if ( ( str [i] >= 'A' && str [i] <= 'Z' ) || (str [i] >= 'a' && str [i] <= 'z') )
                str [k ++] = str [i] ;
        }
    str [k] = '\0' ; 

    printf ( "\n\t * After removing the Output String : %s\n\n\n" , str ) ;
    return 0 ;
}
