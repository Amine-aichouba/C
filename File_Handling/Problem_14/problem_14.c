


#include <stdio.h>
#include <stdlib.h>


void decrypt_file ( const char *file_name , int shift ) 
{
    FILE *file = fopen ( file_name , "r+" ) ;
    
    if ( file == NULL ) 
        {
            perror ( "\n * Error opening file ! " ) ;
            return ;
        }

    char ch ;

    while ( ( ch = ( char ) fgetc ( file ) ) != EOF ) 
    {
        if ( ( ch >= 'a' ) && ( ch <= 'z' ) ) 
            {
                ch = ( char ) ( 'a' + ( ch - 'a' - shift + 26 ) % 26 ) ;
            } 
            else if ( ( ch >= 'A' )  && ( ch <= 'Z' ) ) 
                    {
                        ch = ( char ) ( 'A' + ( ch - 'A' - shift + 26 ) % 26 ) ;
                    }

        fseek ( file , -1 , SEEK_CUR ) ;
        fputc ( ch , file ) ;
        fflush ( file ) ;
    }

    fclose ( file ) ;
    printf ( "\n\n* The file %s decrypted successfully..!! " , file_name ) ;
}

int main () 
{
    char file_name [100] ;
    int shift = 3 ; 

    printf ( "\n\n* Enter the name of file to decrypt : " ) ;
    scanf ( " %s" , file_name ) ;

    decrypt_file ( file_name , shift ) ;

    return 0 ;
}