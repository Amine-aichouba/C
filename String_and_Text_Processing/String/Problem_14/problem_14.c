#include <stdio.h>
#include <stdbool.h>

bool search ( char str [] , char sub_str [] ) 
{
    int str_length = 0 , sub_str_length = 0 ;

    while ( str [str_length] != '\0' )  str_length ++ ;

    if ( str_length > 0 && str [str_length - 1] == '\n' ) 
        {
            str [str_length - 1] = '\0' ;
            str_length -- ;
        }

    while ( sub_str [sub_str_length] != '\0' )  sub_str_length ++ ;

    if ( sub_str_length > 0 && sub_str [sub_str_length - 1] == '\n' ) 
        {
            sub_str [sub_str_length - 1] = '\0' ;
            sub_str_length -- ;
        }
        
    if ( sub_str_length > str_length )  return false ;

    for ( int i = 0 ; i <= str_length - sub_str_length ; i ++ ) 
        {
            bool match = true ;
            for ( int j = 0 ; j < sub_str_length ; j ++ ) 
                {
                    if ( str [i + j] != sub_str [j] ) 
                        {
                            match = false ;
                            break ;
                        }
                }
            if ( match ) return true ; 
        }
    return false ;
}

int main () 
{
    char str [100] , sub_str [100] ;

    printf ( "\n\n\t * Give me the string : ");
    fgets ( str , sizeof ( str ) , stdin ) ;

    printf ( "\n\n\t * Give me the substring to be searched : " ) ;
    fgets ( sub_str , sizeof ( sub_str ) , stdin ) ;
    
    if ( search ( str , sub_str ) ) 
        printf ( "\n\n\t * The substring is exists in the string \n\n" ) ;
    else
        printf ( "\n\n\t * The substring is not exists in the string \n\n" ) ;

    return 0 ; 
}
