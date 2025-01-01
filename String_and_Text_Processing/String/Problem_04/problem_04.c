

#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    printf ( "\n\t * The characters of the string in reverse are : " ) ;
    // str [ strlen (str) ] == '\0' ,  str [ strlen (str) - 1 ] == '\n'
    for ( int i = ( int ) strlen ( str ) - 2 ; i >= 0 ; i -- ) 
        printf ( " %c " , str [i] ) ;
    
    printf ( "\n\n\n" ) ;
    return 0 ;
}