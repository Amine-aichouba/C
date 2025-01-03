


#include <stdio.h>


int str_size ( char* ch ) 
{
   int ctr = 0 ;
   while ( *ch != '\0' ) 
        {
           ctr ++ ; 
           ch ++ ; 
        }
    
    return ctr ;
}


int main () 
{
    char str [50] ;
    int l ;
   
    printf ( "\n\n\t * Pointer : Calculate the length of the string : " ) ; 
    printf ( "\n\n\t * ---------------------------------------------" ) ; 

    printf ( "\n\n\t * Input a string : " ) ;
    fgets ( str , 50 , stdin ) ;

    l = str_size ( str ) ;

    if ( l > 0 && str [l - 1] == '\n' )  str [l - 1] = '\0' ;    
    l -- ;
        
    printf ( "\n\n\t * The length of the given string < %s > is : %d " , str , l ) ; 
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}

