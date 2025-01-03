

#include <stdio.h>


int main ()
{
    int m = 29 , *ab ; 
   
    printf ( "\n\n\t * Pointer : How to handle the pointers in the program : " ) ;
    printf ( "\n\n\t _______________________________________________________ " ) ;
    printf ( "\n\n\t * Here in the declaration ab = int pointer , int m = 29 " ) ;

    printf ( "\n\n\t * Address of m : %p " , ( void* ) &m ) ;  
    printf ( "\n\n\t * Value of m : %d " , m ) ;  
    
    ab = &m ;

    printf ( "\n\n\t * Now ab is assigned with the address of m " ) ;
    printf ( "\n\n\t * Address of pointer ab : %p " , ( void* ) ab ) ;      
    printf ( "\n\n\t * Content of pointer ab : %d " , *ab ) ;   

    m = 34 ; 

    printf ( "\n\n\t * The value of m assigned to 34 now. " ) ;
    printf ( "\n\n\t * Address of pointer ab : %p " , ( void* ) ab ) ;      
    printf ( "\n\n\t * Content of pointer ab : %d " , *ab ) ; 

    *ab = 7 ;

    printf ( "\n\n\t * The pointer variable ab is assigned the value 7 now." ) ;
    printf ( "\n\n\t * Address of m : %p " , ( void* ) &m ) ;         
                                                                            
    printf ( "\n\n\t * Value of m : %d " , m ) ;              
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
