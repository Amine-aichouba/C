


#include <stdio.h>
#include <string.h>


int main ()
{
    char first_str [100] , second_str [100] , str [200] = {'0'} ;
    int str_length = 0 ;

    printf ( "\n\n\t * Give me the first string : " ) ;
    fgets ( first_str , sizeof ( first_str ) , stdin ) ;
    str [ strcspn ( first_str , "\n" ) ] = '\0' ; 

    printf ( "\n\t * Give me the second string : " ) ;
    fgets ( second_str , sizeof ( second_str ) , stdin ) ;
    str [ strcspn ( second_str , "\n" ) ] = '\0' ;
    
    for ( int i = 0 ; first_str [i] != '\0' ; i ++ )
        str [str_length ++] = first_str [i] ;
    
    str_length -- ;
    for ( int i = 0 ; second_str [i] != '\0' ; i ++ )
        str [str_length ++] = second_str [i] ;

    printf ( "\n\n\t * After concatenation the string is : %s " , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}