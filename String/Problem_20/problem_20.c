


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void find_larg_small ( char str [] ) 
{
    int len = ( int ) strlen ( str ) ;
    char small_word [50] , larg_word [50] , current_word [50] ;
    int small_len = len , larg_len = 0 , current_len = 0;

    for ( int i = 0 ; i <= len ; i ++ ) 
        {
            if ( isspace ( str [i] ) || str [i] == '\0' ) 
                {
                    if ( current_len > 0 ) 
                        {
                            current_word [current_len] = '\0' ; 
                            if ( current_len < small_len ) 
                                {
                                    small_len = current_len ;
                                    strcpy ( small_word , current_word ) ;
                                }
                            if ( current_len > larg_len ) 
                                {
                                    larg_len = current_len ;
                                    strcpy ( larg_word , current_word ) ;
                                }
                            current_len = 0 ; 
                        }
                } 
                else 
                    current_word [current_len ++] = str [i] ;
        }

    printf ( "\n\n\t * the string : '%s' " , str ) ;
    printf ( "\n\n\t * The largest word is : '%s' " , larg_word ) ;
    printf ( "\n\n\t * The smallest word is : '%s' " , small_word ) ;
    
}

int main () 
{
    char str [100] ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    find_larg_small ( str ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}
