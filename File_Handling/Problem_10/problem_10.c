


#include <stdio.h>


int main ()
{
    FILE *fptr ;
    int i , num ;
    char str [100] , file_name [20] ;

	printf ( "\n\n* Enter the file name to be opened : " ) ;
	scanf ( " %s" , file_name ) ;		

    fptr = fopen ( file_name , "a" ) ; 
    
    printf ( "\n* Enter the number of lines to be written : " ) ;
    scanf ( " %d" , &num ) ;  getchar () ;
    
    printf ( "\n* The lines are : \n\n" ) ;  
    for ( i = 1 ; i <= num ; i ++ ) 
        {
            printf ( " %d : " , i ) ;
            fgets ( str , sizeof ( str ) , stdin ) ;
            fputs ( str , fptr ) ;
        }      

    fclose ( fptr ) ;

	fptr = fopen ( file_name , "r" ) ;  
	
    printf ( "\n\n* The content of the file %s is  :  \n\n" , file_name ) ;
	
	while ( fgets ( str , sizeof ( str ) , fptr ) != NULL )  printf ( " %s" , str ) ; 
		
    printf ( "\n\n\n" ) ;
    
    fclose ( fptr ) ;

    return 0 ;
}
