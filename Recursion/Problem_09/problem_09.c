


#include <stdio.h>
#include <string.h>


void reverse ( char str [] , int start , int end ) 
{  
    if ( start >= end )  return ;

    char temp = str [start] ;
    str [start] = str [end] ;
    str [end] = temp ;
    
    reverse ( str , start + 1 , end - 1 ) ;
}

int main () 
{
    char str [100] ; 

    printf ( "\n\n\t * Give me any string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    str [ strcspn ( str , "\n" ) ] = 0 ;

    int length = ( int ) strlen ( str ) ;
    
    reverse ( str , 0 , length - 1 ) ;
    
    printf ( "\n\n\t * The reversed string is : %s " , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}