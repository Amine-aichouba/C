

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct  
{
    char name [30] ;
    int id ;

} Employee ;

int main () 
{
    Employee *arr [1] ;
    
    arr [0] = ( Employee* ) malloc ( sizeof ( Employee ) ) ;
    
    if ( arr [0] == NULL ) 
        {
            printf (" Memory allocation failed " ) ;
            exit (1) ; 
        }

    strcpy ( arr [0] -> name , "Alex" ) ;
    arr [0] -> id = 1002 ;

    printf ( "\n\n\t * Employee Name : %s " , arr [0] -> name ) ;
    printf ( "\n\n\t * Employee ID : %d " , arr [0] -> id ) ;
    printf ( "\n\n\n" ) ;

    free ( arr [0] ) ;
    
    return 0 ;
}
