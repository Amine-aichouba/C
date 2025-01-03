


#include <stdio.h>
#include <string.h>

int main () 
{
    char name [25][50] , temp [25] ; 
    int number ; 

    printf ( "\n\n\t * Sorts the strings of an array using bubble sort : " ) ; 

    printf ( "\n\n\t * Give me number of strings : " ) ;
    scanf ( " %d" , &number ) ; getchar () ;

    printf ( "\n" ) ;
    for ( int i = 0 ; i < number ; i ++ ) 
        {
            printf ( "\n\t * Give me string %d : " , i+1 ) ;
            fgets ( name [i] , sizeof ( name [i] ) , stdin ) ;
            name [i][ strcspn ( name [i] , "\n" ) ] = '\0' ;
        }
    
    for ( int i = 0 ; i < number ; i ++ ) 
        {
            for ( int j = 0 ; j < number - i - 1 ; j ++ ) 
                {
                    if ( strcmp ( name [j] , name [j + 1] ) > 0 ) 
                        {
                            strcpy ( temp , name [j] ) ; 
                            strcpy ( name [j] , name [j + 1] ) ;
                            strcpy ( name [j + 1] , temp ) ;
                        }
                }
        }

    printf ( "\n\n\t * The strings appear after sorting : " ) ; 
    for ( int i = 0 ; i < number ; i ++ ) 
        {
            printf ( " \" %s \"  " , name [i] ) ;
        }

	printf ( "\n\n\n" ) ;

	return 0 ;
}
