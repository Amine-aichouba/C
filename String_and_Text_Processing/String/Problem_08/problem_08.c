


#include <stdio.h>


int main ()
{
    char first_str [50] , second_str [50] ;
    int i = 0 ;

    printf ( "\n\n\t * Give me the string : " ) ;
    fgets ( first_str , sizeof ( first_str ) , stdin ) ;

    while ( first_str [i] != '\0' )
        {
            if ( first_str [i] == '\n' ) first_str [i] = '\0' ;
            second_str [i] = first_str [i] ;
            i ++ ;
        }

    printf ( "\n\t * The First string is : %s " , first_str ) ;
    printf ( "\n\n\t * The Second string is : %s " , second_str ) ;
    printf ( "\n\n\t * Number of characters copied : %d " , i ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}