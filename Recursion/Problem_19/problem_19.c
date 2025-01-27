


#include <stdio.h>
#include <string.h>


void copy_string ( char* source , char* destination ) 
{
    if ( *source == '\0' ) 
        {
            *destination = '\0' ; 
            return ;
        }

    *destination = *source ;
    copy_string ( source + 1 , destination + 1 ) ;
}


int main () 
{
    char source [100] , destination [100] ;

    printf ( "\n\n\t * Give me the string to copy : " ) ;
    fgets ( source , sizeof source , stdin ) ;

    source [ strcspn ( source , "\n" ) ] = '\0' ;

    copy_string ( source , destination ) ;

    printf ( "\n\n\t * The first string is : %s " , source ) ;
    printf ( "\n\n\t * The copied string is : %s " , destination ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}