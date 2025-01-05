


#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main () 
{
    char username [20] ;

    while ( true ) 
        {
            printf ( "\n\n\t * Give me a username ( at least 8 characters ) : " ) ;
            scanf ( " %s" , username ) ;

            if ( strlen ( username ) >= 8 )  break ;
            else 
                printf ( "\n\n\t * Error : Username must be at least 8 characters long.\n " ) ;

            while ( getchar () != '\n' ) ;
        }   

    printf ( "\n\n\t * Valid username entered : %s\n" , username ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;  
}
