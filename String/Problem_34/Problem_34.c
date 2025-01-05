


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        {
            if ( ( str [i] == 'a' )
                 || ( str [i] == 'i' ) 
                    || ( str [i] == 'e' ) 
                       || ( str [i] == 'u' )
                          || ( str [i] == 'o' )  )  
                str [i] -= 'a' - 'A' ;       
        }
    printf ( "\n\t * After converting vowels into upper case the sentence becomes : %s " , str ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}