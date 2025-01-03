


#include <stdio.h>


int main ()
{
    char str [100] ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( str , sizeof ( str ) , stdin ) ;
    
    int count = 0 , max = 0 , index ;
    for ( int i = 0 ; str [i] != '\n' ; i ++ )
        {
            count = 0 ;
            for ( int j = i ; str [j] != '\n' ; j ++ )
                if ( str [i] == str [j] ) count ++ ;
                
            if ( count > max )
                {
                    index = i ;
                    max = count ;
                }
        }
    
    printf ( "\n\t * The Highest frequency of character < '%c' > appears number of times : %d " , str [index] , max ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}