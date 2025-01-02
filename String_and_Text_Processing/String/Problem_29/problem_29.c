


#include<stdio.h>
#include<ctype.h>

int main () 
{
    FILE *f ; 
    int a ; 

    printf ( "\n\n\t * Remove the spaces between two words : " ) ;
    f = fopen ( "problem_29.txt" , "r" ) ;

    printf ( "\n\n\t * The content of the file is : The quick brown fox jumps over the lazy dog" ) ;

    printf ( "\n\n\t * After removing the spaces the content is :  " ) ;

    if ( f ) 
        {
            do 
                {
                    a = fgetc ( f ) ;
                    if ( isgraph ( a ) ) putchar ( a ) ;
                
                } while ( a != EOF ) ; 
        
            fclose ( f ) ; 
        }

    printf ( "\n\n\n" ) ;
    return 0 ; 
}
