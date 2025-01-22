


#include <stdio.h>


int main ()
{
    int i , j , rows ;

    printf ( "\n\n\t * Give me the number of rows : " ) ;
    scanf ( " %d" , &rows ) ;
 
    for ( i = 0 ; i < rows ; i ++ )
        {   
            printf ( "\n\t" ) ;
            for ( j = 0 ; j < rows ; j ++ ) 
                {
                    if ( j <= rows - i - 1 )  printf ( "  " ) ;
                    else  
                        printf ( "  • " ) ;
                } 
        }
    printf ( "\n\n\n" ) ;
    
    return 0 ; 
}