


#include <stdio.h>


union Emp_add 
{
    char *ename ;    
    char stname [20] ; 
    int pincode ;    
} ;

union Emp_add employee , *pt ;

int main () 
{
    printf ( "\n\n\t * Pointer : Show a pointer to union : " ) ;

    employee.ename = "John Mc\0Donald" ; 
    pt = &employee ; 

    printf ( "\n\n\t %s %s \n\n\n" , pt->ename , (*pt).ename ) ;

    return 0 ;
}