

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 3


typedef struct 
    {
        int items [MAX] ;
        int top ;
    } Stack ;


void init ( Stack* stack ) {
    stack->top = -1 ;
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


bool pop ( Stack* stack , int* value ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack Underflow!\n" ) ;
            return false ;
        }
    *value = stack->items [ ( stack->top ) -- ] ;
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
        printf ( " %d " , stack->items [i] ) ;
}


int main () 
{
    Stack stack ;
    init ( &stack ) ;

    push ( &stack , 1 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 3 ) ;
 
    printf ( "\n\n* Stack size : %d" , MAX ) ;
    printf ( "\n\n* Original Stack : " ) ;
    display ( &stack ) ;

    if ( is_Full ( &stack ) ) 
        printf ( "\n\n* Stack is full !!\n" ) ;
    else 
        printf ( "\n\n* Stack is not full !!\n" ) ;


    Stack stack_1 ;
    init ( &stack_1 ) ;

    push ( &stack_1 , 1 ) ;
    push ( &stack_1 , 2 ) ;

    printf ( "\n\n* Stack size : %d" , MAX ) ;
    printf ( "\n\n* Original Stack : " ) ;
    display ( &stack_1 ) ;

    if ( is_Full ( &stack_1 ) ) 
        printf ( "\n\n* Stack is full !!\n" ) ;
    else 
        printf ( "\n\n* Stack is not full !!\n" ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}