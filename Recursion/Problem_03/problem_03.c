


#include <stdio.h>

int fibonacci ( int number )
{ 
    if ( number <= 1 ) return number ;
    return fibonacci ( number - 1 ) + fibonacci ( number - 2 ) ; 
}

int main ()
{
    int terms , i ;

    printf ( "\n\n\t * Give me number of terms for the Series ( < 20 ) : " ) ;
    scanf ( " %d" , &terms ) ;

    printf ( "\n\t * The Series are : " ) ;
    for ( i = 1 ; i <= terms ; i ++ ) 
        printf ( " %d " , fibonacci ( i ) ) ;
    
    printf ( "\n\n\n" ) ; 
    return 0 ;
}

  
   
