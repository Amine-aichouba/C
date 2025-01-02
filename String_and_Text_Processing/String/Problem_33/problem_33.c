


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    char str [100] ;
    int count ;

    printf ( "\n\n\t * Give the string : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    str [ strcspn ( str , "\n" ) ] = '\0' ;

    printf ( "\n\n\t * The count of each character in the string < %s > is : \n" , str ) ;

    for ( int i = 0 ; str [i] != '\0' ; i ++ )
        { 
            count = 0 ;
            for ( int j = i+1 ; str [j] != '\0' ; j ++ )
                {
                    if ( str [i] == str [j] ) 
                        {
                            str [j] = ' ' ;
                            count ++ ;
                        }
                }       
            if ( str [i] != ' ' )   
                printf ( "\n\t   %c    %d" , str [i] , count+1 ) ;
        }

    printf ( "\n\n\n" ) ;
    return 0 ;
}