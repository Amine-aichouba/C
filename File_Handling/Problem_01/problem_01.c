


#include <stdio.h>
#include <stdlib.h>
  
#define F_NAME "test.txt"

int main ()
{
    char str [1000] ;
    FILE *fptr ;

    printf ( "\n\n * Create a file ( test.txt ) and input text : " ) ;

    fptr = fopen ( F_NAME , "w" ) ;	
    if( fptr == NULL )
        {
            perror ( "\n* Error in opening file! " ) ;
            return EXIT_FAILURE ;
        }

    printf ( "\n\n * Input a sentence for the file : " ) ;
    fgets ( str , sizeof str , stdin ) ;
    fprintf ( fptr , "%s" , str ) ;
    fclose ( fptr ) ;
    printf ( "\n\n * The file %s created successfully...!! " , F_NAME ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
