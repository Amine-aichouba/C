


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100


typedef struct 
        {
            int* items ;
            int top ;
        } Stack ;


Stack* init () 
{
    Stack* stack = ( Stack* ) malloc ( sizeof ( Stack ) ) ; 
    stack->items = ( int* ) malloc ( MAX * sizeof ( int ) ) ; 
    stack->top = -1 ;
    return stack ;
}


bool is_Empty ( Stack* stack ) {
    return stack->top == -1 ;
}


bool is_Full ( Stack* stack ) {
    return stack->top == MAX - 1 ;
}


void push ( Stack* stack , int value ) {
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow!\n" ) ;
            return ;
        }
    stack->items [ ++ ( stack->top ) ] = value ;
}


bool pop ( Stack* stack , int* data ) 
{
    if ( is_Empty ( stack ) )  return false ;
    *data = stack->items [ ( stack->top ) -- ] ;
    return true ;
}


void display ( Stack* stack ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack is empty!\n" ) ;
            return ;
        }
    for ( int i = 0 ; i <= stack->top ; i ++ )
        printf ( "  %d" , stack->items [i] ) ;
}


Stack* reversed_stack ( Stack* stack ) 
{
    Stack* tmp = init () ; 
    int data ;

    while ( pop ( stack , &data ) ) 
        push ( tmp , data ) ;

    return tmp ;
}


int main () 
{
    Stack* stack = init () ; 

    push ( stack , 50 ) ;
    push ( stack , 40 ) ;
    push ( stack , 30 ) ;
    push ( stack , 20 ) ;
    push ( stack , 10 ) ;

    printf ( "\n\n* Original Stack : " ) ;
    display ( stack ) ;

    stack = reversed_stack ( stack ) ; 

    printf ( "\n\n* Reversed Stack : " ) ;
    display ( stack ) ;

    free ( stack->items ) ;
    free ( stack ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}