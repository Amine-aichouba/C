


#include <stdio.h>
#include <string.h>


void reverse_string ( char *str ) 
{
    int length = ( int ) strlen ( str ) ;
    char *start = str ;
    char *end = str + length - 1 ;
    char temp ;

    while ( start < end ) 
        {
            temp = *start ;
            *start = *end ;
            *end = temp ;
            start ++ ;
            end -- ;
        }
}

int main () 
{
    char str [100] ;

    printf ( "\n\n\t * Pointer : Print a string in reverse order : " ) ;
    printf ( "\n\n\t * Give me a string : " ) ;

    fgets ( str , sizeof ( str ) , stdin ) ;

    str [ strcspn ( str , "\n" ) ] = '\0' ;

    reverse_string ( str ) ;

    printf ( "\n\t * Reverse of the string is : %s \n\n\n" , str ) ;

    return 0 ;
}
