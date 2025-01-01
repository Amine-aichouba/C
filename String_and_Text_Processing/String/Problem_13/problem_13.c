


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    char str [100] ;
    int start , length , fin ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    fin = ( int ) strlen ( str ) ;

    printf ( "\n\t * Give me the position to start extraction : " ) ;
    scanf ( " %d" , &start ) ; 

    printf ( "\n\t * Give me the length of substring : " ) ;
    scanf ( " %d" , &length ) ; 

    if ( start < 0 || start >= fin || length < 0 || start + length > fin ) 
        { 
            printf ( "\n\n\t * Error!! Invalid input." ) ; 
            exit (1) ; 
        }

    printf ( "\n\n\t * The substring retrieve from the string is : \" " ) ;
    for ( int i = start - 1 ; i < start + length - 1 ; i ++ )
        { 
            printf ( "%c" , str [i] ) ; 
        } 
    printf ( " \"\n\n\n" ) ;
    return 0 ;
}