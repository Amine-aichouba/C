


#include <stdio.h>


typedef struct  
    {
        int employeeID ;
        char name [50] ;
        float salary ;
    } Employee ;

int main () 
{
    Employee employee1 , employee2 , employee3 ;

    printf ( "\n\n\t * Give me details for Employee 1 : " ) ;
    printf ( "\n\n\t * Employee ID : " ) ;
    scanf ( " %d" , &employee1.employeeID ) ;  
    printf ( "\n\t * Name : " ) ;
    scanf ( " %s" , employee1.name ) ; 
    printf ( "\n\t * Salary : " ) ;
    scanf ( " %f" , &employee1.salary ) ;

    printf ( "\n\n\t * Input details for Employee 2 : " ) ;
    printf ( "\n\n\t * Employee ID : " ) ;
    scanf ( " %d" , &employee2.employeeID ) ;
    printf ( "\n\t * Name : " ) ;
    scanf ( " %s" , employee2.name ) ;
    printf ( "\n\t * Salary : " ) ;
    scanf ( " %f" , &employee2.salary ) ;

    printf ( "\n\n\t * Give me details for Employee 3 : " ) ;
    printf ( "\n\n\t * Employee ID : " ) ;
    scanf ( " %d" , &employee3.employeeID ) ;
    printf ( "\n\t * Name : " ) ;
    scanf ( " %s" , employee3.name ) ;
    printf ( "\n\t * Salary : " ) ;
    scanf ( " %f" , &employee3.salary ) ;

    Employee highestSalaryEmployee ;
    if ( employee1.salary >= employee2.salary && employee1.salary >= employee3.salary )     
        highestSalaryEmployee = employee1 ;
    else 
        if ( employee2.salary >= employee1.salary && employee2.salary >= employee3.salary ) 
            highestSalaryEmployee = employee2 ;
    else 
        highestSalaryEmployee = employee3 ;
    
    printf ( "\n\n\t * Employee with the Highest Salary : " ) ;
    printf ( "\n\n\t * Employee ID : %d " , highestSalaryEmployee.employeeID ) ;
    printf ( "\n\n\t * Name : %s " , highestSalaryEmployee.name ) ;
    printf ( "\n\n\t * Salary : %.2f " , highestSalaryEmployee.salary ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}


