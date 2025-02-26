


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node 
        {
            int data ;
            struct Node* next ;
            struct Node* prev ;
        } Node ;

typedef struct Stack 
        {
            Node* top ; 
            Node* mid ;
            int count ;
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
    node->prev = NULL ;
    return node ;
}


Stack* init () 
{
    Stack* stack = ( Stack* ) malloc ( sizeof ( Stack ) ) ;
    if ( stack == NULL ) 
        {
            perror ( "Memory allocation failed" ) ;
            exit (1) ;
        }
    stack->top = NULL ;
    stack->mid = NULL ;
    stack->count = 0 ;
    return stack ;
}


void push ( Stack* stack , int data ) 
{
    Node* node = new_node ( data ) ;
    node->next = stack->top ;

    if ( stack->top != NULL ) 
        {
            stack->top->prev = node ;
        }

    stack->top = node ;
    stack->count ++ ;

    if ( stack->count == 1 ) 
        stack->mid = node ;
    else if ( stack->count % 2 == 0 ) 
            stack->mid = stack->mid->prev ;
}


bool get_mid ( Stack* stack , int* mid ) 
{
    if ( stack->mid == NULL )  return false ;
    *mid = stack->mid->data ;
    return true ;
}


void delete_mid ( Stack* stack ) 
{
    if ( stack->mid == NULL )  return ;

    Node* tmp = stack->mid ;

    if ( tmp->prev != NULL ) 
        tmp->prev->next = tmp->next ;
    else
        stack->top = tmp->next ;

    if ( tmp->next != NULL ) 
        {
            tmp->next->prev = tmp->prev ;
        }

    if ( stack->count % 2 == 1 ) 
        stack->mid = tmp->next ;
    else 
        stack->mid = tmp->prev ; 
    
    free ( tmp ) ;
    stack->count -- ;

    if ( stack->count == 0 ) 
        stack->mid = NULL ;
}


void display_stack ( Stack* stack ) 
{
    Node* current = stack->top ;
    while ( current != NULL ) 
        {
            printf ( "  %d" , current->data ) ;
            current = current->next ;
        }
}


int main () 
{
    Stack* stack = init () ;
    int mid ;

    push ( stack , 23 ) ;
    push ( stack , 32 ) ;
    push ( stack , 26 ) ;
    push ( stack , 15 ) ;
    push ( stack , 88 ) ;

    printf ( "\n\n* Stack elements :" ) ;
    display_stack ( stack ) ;

    if ( get_mid ( stack , &mid ) )
        printf ( "\n\n* Middle element : %d " , mid ) ;

    printf ( "\n\n* Delete the middle element of the said stack : " ) ;
    delete_mid ( stack ) ;

    printf ( "\n\n* Stack elements :" ) ;
    display_stack ( stack ) ;

    if ( get_mid ( stack , &mid ) )
        printf ( "\n\n* Middle element : %d" , mid ) ;

    printf ( "\n\n* Delete the middle element of the said stack : " ) ;
    delete_mid ( stack ) ;

    printf ( "\n\n* Stack elements :" ) ;
    display_stack ( stack ) ;

    if ( get_mid ( stack , &mid ) )
        printf ( "\n\n* Middle element : %d " , mid ) ;

    printf ( "\n\n\n" ) ;

    free ( stack ) ;
    return 0 ;
}