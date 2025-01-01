

#include <stdio.h>
#include <string.h>


int main ()
{
    char str [50] ;
    int special_char = 0 , digit = 0 , alpha = 0 ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    for ( int i = ( int ) strlen ( str ) ; i >= 0 ; i -- )
        {
            if (  ( str [i] >= 'A' && str [i] <= 'Z' ) || ( str [i] >= 'a' && str [i] <= 'z' ) )
                alpha ++ ; 
            else
                if ( str [i] >= '1' && str [i] <= '9' )  digit ++ ;
            else
                 special_char ++ ;
        }
    
    printf ( "\n\n\t * Number of Alphabets in the string is : %d " , alpha ) ;
    printf ( "\n\n\t * Number of Digits in the string is : %d " , digit ) ;
    printf ( "\n\n\t * Number of Special characters in the string is : %d " , special_char ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}