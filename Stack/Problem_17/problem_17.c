



/*   
    25 | 2                       5 | 2
       |----+                      |---+                                          
     1 | 16 | 2                  1 | 2 | 2                      
            |---+                      |---+                         
          0 | 6 | 2                  0 | 1 | 2                        
                |---+                      |---                            
              0 | 3 | 2                  1 | 0                            
                    |---+                
                  1 | 1 | 2               
                        |----               
                      1 | 0                                                   
*/                  

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node 
        {
            int data ;
            struct Node* next ;
        } Node ;


typedef struct Stack 
        {
            Node* top ;
        } Stack ;


Node* new_node ( int data ) 
{
    Node* node = ( Node* ) malloc ( sizeof ( Node ) ) ;
    if ( node == NULL ) 
        {
            perror ( "Memory allocation failed" ) ;
            exit (1) ;
        }
    node->data = data ;
    node->next = NULL ; 
    return node ;
}


void init ( Stack* stack ) {
    stack->top = NULL ;
}


void push ( Stack* stack , int data ) 
{
    Node* node = new_node ( data ) ;
    node->next = stack->top ; 
    stack->top = node ; 
}


void pop ( Stack* stack )  
{
    if ( stack->top == NULL )  return ;          
    Node* temp = stack->top ;
    stack->top = stack->top->next ; 
    free ( temp ) ; 
}


void print_stack ( Stack* stack ) 
{
    Node* current = stack->top ;
    while ( current != NULL ) 
        {
            printf ( "%d" , current->data ) ;
            current = current->next ;
        }
}


void free_stack ( Stack* stack )
{
    while ( stack->top != NULL )  pop ( stack ) ;
}


void decimal_to_binary ( Stack* stack , int decimal ) 
{
    while ( true )
        {
            int result = decimal % 2 ;
            push ( stack , result ) ;
            decimal /= 2 ;
            if ( decimal == 0 ) return ; 
        }
}


int main ()
{
    Stack stack_1 , stack_2 , stack_3 ;
    int decimal ;

    init ( &stack_1 ) ;

    printf ( "\n\n* Enter a decimal number : " ) ;
    scanf ( " %d" , &decimal ) ;

    decimal_to_binary ( &stack_1 , decimal ) ;

    printf ( "\n* The binary equivalent is : " ) ;
    print_stack ( &stack_1 ) ;

    free_stack ( &stack_1 ) ;


    init ( &stack_2 ) ;

    printf ( "\n\n\n* Enter a decimal number : " ) ;
    scanf ( " %d" , &decimal ) ;

    decimal_to_binary ( &stack_2 , decimal ) ;
    
    printf ( "\n* The binary equivalent is : " ) ;
    print_stack ( &stack_2 ) ;

    free_stack ( &stack_2 ) ;


    init ( &stack_3 ) ;

    printf ( "\n\n\n* Enter a decimal number : " ) ;
    scanf ( " %d" , &decimal ) ;

    decimal_to_binary ( &stack_3 , decimal ) ;

    printf ( "\n* The binary equivalent is : " ) ;
    print_stack ( &stack_3 ) ;

    free_stack ( &stack_3 ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}