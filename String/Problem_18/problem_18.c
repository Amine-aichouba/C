


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] , ch ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;
    
    printf ( "\n\t * Give me the character to find frequency : " ) ;
    scanf ( " %c" , &ch ) ;  getchar () ;

    int count = 0 ;
    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        if ( str [i] == ch ) count ++ ; 
    
    printf ( "\n\n\t * The frequency of ' %c ' is : %d \n\n\n" , ch , count ) ;
    return 0 ;
}