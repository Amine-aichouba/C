


#include <stdio.h>


int main ()
{
    int i , j , k , rows ;

    printf ( "\n\n\t * Give me the number of rows : " ) ;
    scanf ( " %d" , &rows ) ;
    
    k = 1 ;
    for ( i = 1 ; i <= rows ; i ++ )
        {   
            printf ( "\n\t" ) ;
            for ( j = 1 ; j <= rows ; j ++ ) 
                {
                    if ( j <= rows - i )  printf ( "  " ) ;
                        
                    else  
                        printf ( "  %d " , k ++ ) ;
                } 
        }
    printf ( "\n\n\n" ) ;
    
    return 0 ; 
}