


#include <stdio.h>
#include <string.h>


int main ()
{
    char str [100] ;
    int index = -1 ;

    printf ( "\n\n\t * Give the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        {
            for ( int j = i + 1 ; str [j] != '\0' ; j ++ )
                {
                    if ( str [i] == str [j] ) 
                        {
                            index = i ;
                            break ; 
                        }         
                }
            if ( index > -1 )  break ;
        }
    
    printf ( "\n\t * The first repetitive character in < %s > is : %c" , str , str [index] ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}