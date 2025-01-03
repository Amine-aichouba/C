


#include<stdio.h>
#include<ctype.h>

int main () 
{
    int ctr = 0 ; 
    char str [] = " The quick brown fox \n jumps over the \n lazy dog. \n" ;

    printf ( "\n\n\t * Print only the string before new line character : " ) ;

    while ( isprint ( str [ctr] ) ) 
        {
            putchar ( str [ctr] ) ; 
            ctr ++ ; 

            if ( str [ctr] == '\n' )  break ;
        }

    printf ( "\n\n\n" ) ;
    return 0 ;
}
