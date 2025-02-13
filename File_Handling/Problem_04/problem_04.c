


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    int i = 0 , tot ; 
    char line [100][100] , file_name [20] ;
    FILE *file ;

    printf ( "\n\n * Give me the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name  ) ;

    file = fopen ( file_name  , "r" ) ;

    if( file == NULL )
        {
            perror ( "\n* Error in opening file! " ) ;
            return EXIT_FAILURE ;
        }

    while ( fgets ( line [i] , sizeof ( line [0] ) , file ) ) 
	    {
            line [i] [ strlen ( line [i] ) - 1 ] = '\0' ;
            i ++ ; 
        }
    tot = i ;

	printf ( "\n * The content of the file < %s > are : \n " , file_name  ) ;    
    for ( i = 0 ; i < tot ; ++ i )
        printf ( " %s\n" , line [i] ) ;
    
    printf ( "\n\n\n" ) ;
    
    fclose ( file ) ;

    return 0 ;
}