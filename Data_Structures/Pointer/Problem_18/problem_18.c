


#include <stdio.h>


typedef struct 
{
    char *ename ;        
    char stname [20] ;    
    int pincode ;        
    
} Emp_address ;

Emp_address employee = { "John Alter" , "Court Street \n" , 654134 } ;
Emp_address *pt = &employee ;

int main () 
{   
    printf ( "\n\n\t * Pointer : Show the usage of pointer to structure : " ) ;
    printf ( "\n\n\t %s from %s \n\n\n" , pt->ename , (*pt).stname ) ;
    
    return 0 ;
}
