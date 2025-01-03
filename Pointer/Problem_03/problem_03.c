


#include <stdio.h>

int main ()
{
    int m = 300 ;     
    double fx = 300.60 ; 
    char cht = 'z' ;  

    printf ( "\n\n\t * Pointer : Demonstrate the use of & and * operator : " ) ;
    printf ( "\n\n\t _____________________________________________________ " ) ;

    int* pt1 ;     
    double* pt2 ;   
    char* pt3 ;    

    pt1 = &m ;    
    pt2 = &fx ;    
    pt3 = &cht ;   

    printf ( "\n\n\t m = %d \n\t fx = %f \n\t cht = %c " ,  m , fx , cht ) ;       
    
    printf ( "\n\n\t * Using & operator : " ) ;
    printf ( "\n\n\t _____________________" ) ;
    printf ( "\n\n\t address of m : %p " , ( void* ) &m ) ;   
    printf ( "\n\t address of fx : %p " , ( void* ) &fx ) ;
    printf ( "\n\t address of cht : %p " , ( void* ) &cht ) ; 

    printf ( "\n\n\t * Using & and * operator : " ) ;
    printf ( "\n\n\t ___________________________" ) ;
    printf ( "\n\n\t * value at address of m : %d " , *( &m ) ) ;   
    printf ( "\n\t * value at address of fx : %f " , *( &fx ) ) ; 
    printf ( "\n\t * value at address of cht : %c " , *( &cht ) ) ;

    printf ( "\n\n\t * Using only pointer variable : " ) ;
    printf ( "\n\n\t ________________________________" ) ;
    printf ( "\n\n\t * address of m : %p " , ( void* ) pt1 ) ;  
    printf ( "\n\t * address of fx : %p " , ( void* ) pt2 ) ; 
    printf ( "\n\t * address of cht : %p " , ( void* ) pt3 ) ; 

    printf ( "\n\n\t * Using only pointer operator : " ) ;
    printf ( "\n\n\t ________________________________" ) ;
    printf ( "\n\n\t * value at address of m : %d " , *pt1 ) ; 
    printf ( "\n\t * value at address of fx : %f " , *pt2 ) ; 
    printf ( "\n\t * value at address of cht : %c " , *pt3 ) ; 
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
