


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


typedef struct Node
        {
            int data ;
            struct Node* next ;
            struct Node* prev ;
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
    return stack ;
}


void push ( Stack* stack , int data )
{
    Node* node = new_node ( data ) ;
    node->next = stack->top ;
    if ( stack->top != NULL )
        stack->top->prev = node ;
    stack->top = node ; 
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


int get_min ( Stack* stack )
{
    int min = INT_MAX ;
    Node* current = stack->top ;
    while ( current != NULL )
        {
            if ( current->data < min ) 
                min = current->data ;
            current = current->next ;
        }
    return min ;
}


Stack* delete_min ( Stack* stack , int min ) 
{
    Node* current = stack->top ;
    while ( current != NULL ) 
        {
            if ( current->data == min ) 
                {
                    Node* tmp = current ;

                    if ( tmp->prev != NULL ) 
                        tmp->prev->next = tmp->next ; 
                    else 
                        stack->top = tmp->next ; 

                    if ( tmp->next != NULL ) 
                        tmp->next->prev = tmp->prev ;

                    current = tmp->next ;
                    free ( tmp ) ; 
                } 
                else 
                    current = current->next ; 
        }
    return stack ; 
}


void free_stack ( Stack* stack )
{
    Node* current = stack->top ;
    while ( current != NULL )
        {
            Node* tmp = current ;
            current = current->next ;
            free ( tmp ) ;
        }
}

int main ()
{
    Stack* stack = init () ;
    int min ;


    push ( stack , 1 ) ;
    push ( stack , 3 ) ;
    push ( stack , 2 ) ;
    push ( stack , 5 ) ;
    push ( stack , 4 ) ;
    push ( stack , 7 ) ;

    printf ( "\n\n* Elements of the stack : " ) ;
    display_stack ( stack ) ;

    min = get_min ( stack ) ;
    printf ( "\n\n* Minimum value of the said stack : %d " , min ) ;

    stack = delete_min ( stack , min ) ;
    printf ( "\n\n* Elements of the stack after removing the said minimum value \n" ) ;



    printf ( "\n\n* Elements of the stack : " ) ;
    display_stack ( stack ) ;

    min = get_min ( stack ) ;
    printf ( "\n\n* Minimum value of the said stack : %d " , min ) ;

    stack = delete_min ( stack , min ) ;
    printf ( "\n\n* Elements of the stack after removing the said minimum value \n" ) ;



    printf ( "\n\n* Elements of the stack : " ) ;
    display_stack ( stack ) ;

    min = get_min ( stack ) ;
    printf ( "\n\n* Minimum value of the said stack : %d " , min ) ;

    stack = delete_min ( stack , min ) ;
    printf ( "\n\n* Elements of the stack after removing the said minimum value \n\n\n" ) ;

    free_stack ( stack ) ;
}