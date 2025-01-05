


#include <stdio.h>
#include <string.h>

int length_longest_substring ( char str [] ) 
{
    int length = ( int ) strlen ( str ) ;
    int max_len = 0 ;
    int start = 0 ;
    int index [256] ;

    for ( int i = 0 ; i < 256 ; i ++ )  index [i] = -1 ;
       
    for ( int i = 0 ; i < length ; i ++ ) 
        {
            if ( index [ ( int ) str [i] ] >= start ) 
                start = index [ ( int ) str [i] ] + 1 ;
        
            index [ ( int ) str [i] ] = i ;
            if ( i - start + 1 > max_len ) 
                max_len = i - start + 1 ;
    }

    return max_len ;
}

int main () 
{
    char str [100] ;
    printf ( "\n\n\t * Give me a string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    printf ( "\n\t * Length of the longest substring without repeating characters : %d\n", length_longest_substring ( str ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
