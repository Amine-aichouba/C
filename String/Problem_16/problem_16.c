


#include <stdio.h>
#include <string.h>
#include <ctype.h> 


int main ()
{
    char str [100] , word [] = "the" ;
    int str_length , word_length ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    str [ strcspn ( str , "\n" ) ] = '\0' ;

    str_length = ( int ) strlen ( str ) ;
    word_length = ( int ) strlen ( word ) ;

    int count = 0 ;
    for ( int i = 0 ; i <= str_length - word_length ; i ++ )
        {
            int match = 1 ;
            for ( int j = 0 ; j < word_length ; j ++ )
                {
                    if ( tolower ( str [i + j] ) != tolower( word [j] ) )
                        {
                            match = 0 ;
                            break ;
                        }
                }
        if ( match )
            count ++ ;
    }

    printf ( "\n\t * The frequency of the word 'the' (ignoring case) is : %d\n\n" , count ) ;
    return 0 ;
}
