


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void count_vowels_and_consonants ( char *str , int *vowels , int *consonants ) 
{
    *vowels = 0 ;
    *consonants = 0 ;
    
    while ( *str != '\0' ) 
        {
            int ch = tolower ( ( int ) *str ) ; 
            if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) 
                ( *vowels ) ++ ;   
            else 
                if ( ( ch >= 'a' && ch <= 'z' ) ) ( *consonants ) ++ ;  
              
            str ++ ;   
        }          
}


int main () 
{
    char str [100] ;
    int vowels , consonants ;

    printf ( "\n\n\t * Give me a string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    str [ strcspn ( str , "\n" ) ] = '\0' ;

    count_vowels_and_consonants ( str , &vowels , &consonants ) ;

    printf ( "\n\n\t * Number of vowels : %d" , vowels ) ;
    printf ( "\n\n\t * Number of consonants : %d" , consonants ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}
