


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] , buffer ;
    int length ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    length = ( int ) strlen ( str ) ;

    for ( int i = 0 ; i < length ; i ++ )
        {
            for ( int j = 0 ; j < length - i - 1 ; j ++ )
                {
                    if ( str [j] > str [j + 1] )
                        {
                            buffer = str [j] ;
                            str [j] = str [j + 1] ;
                            str [j + 1] = buffer ;
                        }
                }
        }

    printf ( "\n\t * After sorting the string appears like : \" %s \" " , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}