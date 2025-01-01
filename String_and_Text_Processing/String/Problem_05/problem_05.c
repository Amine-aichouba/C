

#include <stdio.h>


int main ()
{
    char str [100] ;
    int i = 0 , count = 1 ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;

    while ( str [i] != '\n' )  
        {
            if ( str [i] == ' ' && str [i + 1] != '\n' && str [i - 1] != ' ' ) 
                count ++ ;
            i ++ ;
        }

    printf ( "\n\t * Total number of words in the string is : %d " , count ) ;    
    printf ( "\n\n\n" ) ;
    return 0 ;
}
