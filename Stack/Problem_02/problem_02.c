


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node
        {
            int data ;
            struct Node* next ;
        } Node ;

typedef struct 
        {
            Node* top ;
        } Stack ;


void init ( Stack* stack ) {
    stack->top = NULL ;
}


bool is_Empty ( Stack* stack ) {
    return stack->top == NULL ;
}

void push ( Stack* stack , int value )
{
    Node* node = ( Node* ) malloc ( sizeof ( Node ) ) ;
    if ( node == NULL )
        {
            printf ( "Memory allocation failed!\n" ) ;
            return ;
        }
    node->data = value ;
    node->next = stack->top ;
    stack->top = node ;
    printf ( "\n* Push data : [ %d ]  " , value ) ;
}


int pop ( Stack* stack )
{
    if ( is_Empty ( stack ) )
        {
            printf ( "Stack Underflow!\n" ) ;
            return -1 ;
        }
    Node* tmp = stack->top ;
    int pop_val = tmp->data ;
    stack->top = stack->top->next ;
    free ( tmp ) ;
    return pop_val ;
}

void free_stack ( Stack* stack )  
{
    while ( !is_Empty ( stack ) )   
        {
            pop ( stack ) ;
        }
}


int main ()
{
    Stack stack ;
    init ( &stack ) ;

    push ( &stack , 1 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 4 ) ;
    push ( &stack , 5 ) ;

    printf ( "\n" ) ; 
    printf ( "\n* Pop data : [ %d ] " , pop ( &stack ) ) ;
    printf ( "\n* Pop data : [ %d ] " , pop ( &stack ) ) ;
    printf ( "\n* Pop data : [ %d ] " , pop ( &stack ) ) ;
    printf ( "\n* Pop data : [ %d ] " , pop ( &stack ) ) ;
    printf ( "\n* Pop data : [ %d ] " , pop ( &stack ) ) ;


    if ( is_Empty ( &stack ) )  printf ( "\n\n* Stack is empty!" ) ;
    free_stack ( &stack ) ;
    printf ( "\n\n\n" ) ;
}