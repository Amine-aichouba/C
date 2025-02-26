


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


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


int peek ( Stack* stack ) 
{
    if ( stack->top == NULL )  return INT_MIN ; 
    return stack->top->data ;
}


int kth_from_top ( Stack* stack , int k ) 
{
    Node* current = stack->top ;
    for ( int i = 0 ; i < k - 1 ; i ++ ) 
        {
            if ( current == NULL )  return INT_MIN ;  
            current = current->next;
        }
    return current->data ; 
}


void print_stack ( Stack* stack ) 
{
    Node* current = stack->top ;
    while ( current != NULL ) 
        {
            printf ( "  %d" , current->data ) ;
            current = current->next ;
        }
}


void free_stack ( Stack* stack )
{
    while ( stack->top != NULL )  pop ( stack ) ;
}
 

int main () 
{
    Stack stack ;
    init ( &stack ) ;

    int n , value , i , k , kth_value ;

    printf ( "\n\n* Enter the number of elements to push onto the stack : " ) ;
    scanf ( " %d" , &n ) ;
    
    for ( i = 0 ; i < n ; i++ ) 
        {
            printf ( "\n* Enter value : " ) ;
            scanf ( "%d" , &value ) ;
            push ( &stack , value ) ;
        }


    printf ( "\n\n* Elements of the stack : " ) ;
    print_stack ( &stack ) ;

    printf ( "\n\n* Top element : %d " , peek ( &stack ) ) ;

    printf ( "\n\n* Enter the value of k to find the k-th element from the top : " ) ;
    scanf ( " %d" , &k ) ;

    kth_value = kth_from_top ( &stack , k ) ;
    if ( kth_value != INT_MIN ) 
        printf ( "\n\n* %dth element from top : %d " , k , kth_value ) ;
    

    printf ( "\n\n* Remove the topmost element from the stack : " ) ;
    pop ( &stack ) ;

    printf ( "\n\n\n* Elements of the stack : " ) ;
    print_stack ( &stack ) ;

    printf ( "\n\n* Top element : %d " , peek ( &stack ) ) ;

    kth_value = kth_from_top ( &stack , k ) ;
    if ( kth_value != INT_MIN ) 
        printf ( "\n\n* %dth element from top : %d " , k , kth_value ) ;
    
    free_stack ( &stack ) ;

    printf ( "\n\n\n" ) ;
    return 0;
}