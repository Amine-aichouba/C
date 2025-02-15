


#include <stdio.h>


int main () 
{
    char file_name [100] ;

    printf ( "\n\n* Enter the name of file to delete : " ) ;
    scanf ( " %s" , file_name ) ;

    if ( remove ( file_name ) == 0 ) 
        printf ( "\n\n* The file < %s > is deleted successfully..!! " , file_name ) ;
    else 
        perror ( "\n\n* Error deleting file  ");
    
    printf ( "\n\n\n" ) ;
    return 0 ;
}