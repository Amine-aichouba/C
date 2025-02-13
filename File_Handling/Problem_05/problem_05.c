


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main ()
{
    int i = 1  ; 
    char file_name  [20] , ch ;
    FILE *file ;

    printf ( "\n\n* Give me the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name  ) ;

    file = fopen ( file_name , "r" ) ;

    if( file == NULL )
        {
            perror ( "\n* Error in opening file! " ) ;
            return EXIT_FAILURE ;
        }

    while ( ( ch = ( char ) fgetc ( file ) ) != EOF )
        {
            if  ( ch == '\n' )   i ++ ; 
        }  

	printf ( "\n* The lines in the file < %s > are : %d " , file_name  , i ) ;    
    printf ( "\n\n\n" ) ;

    fclose ( file ) ;
    
    return 0 ;
}