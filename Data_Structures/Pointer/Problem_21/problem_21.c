


#include <stdio.h>


int main () 
{
    char alph [27] , *ptr ;  
    int x ;

    printf ( "\n\n\t * Pointer : Print all the alphabets : " ) ;

    ptr = alph ;

    for ( x = 0 ; x < 26 ; x ++ ) 
        {
            *ptr = ( char ) ( x + 'A' ) ; 
            ptr ++ ;
        }

    ptr = alph ; 

    printf ( "\n\n\t * The Alphabets are : " ) ;
    for ( x = 0 ; x < 26 ; x ++ ) 
        {
            printf ( " %c " , *ptr ) ; 
            ptr ++ ; 
        }

    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
