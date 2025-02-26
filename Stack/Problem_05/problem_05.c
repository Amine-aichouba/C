


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50


typedef struct 
        {
            int top ;
            int items [MAX] ;
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


void push ( Stack* stack , int data ) 
{
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow! Cannot push \n" ) ;
            return ;
        }
    stack->items [ ++ ( stack->top ) ] = data ;
}


bool pop ( Stack* stack , int* data ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack Underflow! Cannot pop from an empty stack.\n" ) ;
            return false ;
        }
    *data = stack->items [ ( stack->top ) -- ] ;
    return true ;
}


int main ()
{
    int data ;
    Stack stack_1 , stack_2 ;
    init ( &stack_1 ) ;
    init ( &stack_2 ) ;

    push ( &stack_1 , 10 ) ;
    push ( &stack_1 , 30 ) ;
    push ( &stack_1 , 40 ) ;
    push ( &stack_1 , 50 ) ;

    push ( &stack_2 , 20 ) ;
    push ( &stack_2 , 40 ) ;
    push ( &stack_2 , 50 ) ;
    push ( &stack_2 , 60 ) ;
    push ( &stack_2 , 70 ) ; 

    printf ( "\n\n* Elements in Stack_1 are : " ) ;
    while ( !is_Empty ( &stack_1 ) )
        {
            if ( pop ( &stack_1 , &data ) ) 
                printf ( " %d" , data ) ;
        }


    printf ( "\n\n* Elements in Stack_2 are : " ) ;
    while ( !is_Empty ( &stack_2 ) )
        {
            if ( pop ( &stack_2 , &data ) ) 
                printf ( " %d" , data ) ;
        }

    printf ( "\n\n\n" ) ;
    return 0 ;
}