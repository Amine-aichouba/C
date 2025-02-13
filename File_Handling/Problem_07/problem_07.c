#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () 
{
    FILE *fptr ;
    char file_name [20] , ch ;  
    int num_words = 0 , num_characters = 0 , inWord = 0 ;

    printf ( "\n\n* Give me the name of the file you want to open : " ) ;
    scanf ( " %s" , file_name ) ; 
      
    fptr = fopen ( file_name , "r" ) ;
    if ( fptr == NULL ) 
        {
            perror ( "\n* Error in opening file! " ) ;
            return EXIT_FAILURE ;
        }

    while ( ( ch = ( char ) fgetc ( fptr ) ) != EOF ) 
        {
            putchar ( ch ) ;
            num_characters ++ ;
        
            if ( ch == ' ' || ch == '\n' || ch == '\t' )  inWord = 0 ;  
            else 
                {
                    if ( !inWord ) 
                        { 
                            inWord = 1 ;
                            num_words ++ ; 
                        } 
                }
        }

    fclose ( fptr ) ; 

    printf ( "\n\n* The number of words in the file < %s > are : %d " , file_name , num_words ) ;
    printf ( "\n* The number of characters in the file <%s> are : %d " , file_name , num_characters ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}