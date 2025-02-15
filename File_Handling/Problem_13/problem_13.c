


#include <stdio.h>
#include <stdlib.h>



void encrypt_file ( const char *file_name , int shift ) 
{
    char str [100] , ch ;

    FILE *file = fopen ( file_name , "r+" ) ;
    if ( file == NULL ) 
        {
            perror ( "\n* Error opening file ! " ) ;
            return ;
        }

    while ( ( ch = ( char ) fgetc ( file ) ) != EOF )  
        {
            if ( ( ch >= 'a' ) && ( ch <= 'z' ) ) 
                {
                    ch = ( char ) ( 'a' + ( ch - 'a' + shift ) % 26 ) ;
                } 
                else if ( ( ch >= 'A' ) && ( ch <= 'Z' ) ) 
                        {
                            ch = ( char ) ( 'A' + ( ch - 'A' + shift ) % 26 )  ;
                        }
        
            fseek ( file , -1 , SEEK_CUR ) ;
            fputc ( ch , file ) ;
            fflush ( file ) ;
        }
    printf ( "\n\n* File < %s > successfully encrypted ..!! " , file_name ) ;
    fclose ( file ) ;
}


int main () 
{
    char file_name [20] ;
    int shift = 3 ; 

    printf ( " \n\n* Enter the name of file to encrypt : " ) ;
    scanf ( " %s" , file_name ) ;

    encrypt_file ( file_name, shift ) ;

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}