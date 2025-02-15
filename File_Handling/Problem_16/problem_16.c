
#include <time.h>
#include <sys/stat.h>
#include <stdio.h>

int main ()
{
    struct stat status ;
    FILE *fptr ;
    char file_name [20] ;

    printf ( "\n\n* Enter file name : " ) ;
    scanf ( " %s" , file_name ) ;

    fptr = fopen ( file_name , "r" ) ;
    
    fstat ( fileno ( fptr ) , &status ) ;
    printf ( "\n* Last date of File modification : %s" , ctime ( &status.st_ctime ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
