


#include <stdio.h>


int main ()
{
    char str [50] ;
    int vowel = 0 , consonant = 0 ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    for ( int i = 0 ; str [i] != '\n' ; i ++ )
        {
            if ( str [i] == 'A' || str [i] == 'O' || str [i] == 'U' || str [i] == 'E' || str [i] == 'I' )
                vowel ++ ;
            if ( str [i] == 'a' || str [i] == 'o' || str [i] == 'u' || str [i] == 'e' || str [i] == 'i' )
                vowel ++ ;
            else
                consonant ++ ;
        }

    printf ( "\n\n\t * The total number of vowel in the string is : %d " , vowel ) ;
    printf ( "\n\n\t * The total number of consonant in the string is : %d " , consonant ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}