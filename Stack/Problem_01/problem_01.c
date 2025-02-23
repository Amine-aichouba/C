
//                   
//    is Full --> | 4 |  <---  top = MAX      
//                | 3 |                        push : 1 , 2 , 3 , 4
//                | 2 |  <--- peek             pop :  4 , 3 , 2 , 1
//                | 1 |  
//   is Empty --> |___|  <---  top = -1        


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_STACK 10


typedef struct Stack
        {
            int top ;
            int items [MAX_STACK] ;
        } Stack ;


void init ( Stack* stack ) {
    stack->top = -1 ;
}


bool is_Empty ( Stack* stack ) {
    return stack->top == -1 ;
}


bool is_Full ( Stack* stack ) {
    return stack->top == MAX_STACK - 1 ;
}


void push ( Stack* stack , int value )
{
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow!" ) ;
            return ;
        }
    stack->items [ ++ ( stack->top ) ] = value ;
}


void display ( Stack* stack ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack is empty !!" ) ;
            return ;
        }
    printf ( "\n\n* Stack elements : " ) ;
    for ( int i = 0 ; i <= stack->top ; i ++ ) 
        printf ( "%d " , stack->items [i] ) ;
}


int main ()
{
    Stack stack ;
    init ( &stack ) ;

    push ( &stack , 2 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 4 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 1 ) ;

    display ( &stack ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}