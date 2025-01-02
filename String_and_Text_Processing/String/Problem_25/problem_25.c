


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] , ch ;
    
    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    printf ( "\n\t * Give me replace character : " ) ;
    scanf ( " %c" , &ch ) ; getchar () ;

    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        if ( str [i] == ' ' )  str [i] = ch ;
    
    printf ( "\n\t * After replacing the space with < %c > the new string is : %s " , ch , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}