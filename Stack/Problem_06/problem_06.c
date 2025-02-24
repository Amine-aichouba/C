


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


void push ( Stack* stack , int value ) 
{
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow! Cannot push \n" ) ;
            return ;
        }
    stack->items [ ++ ( stack->top ) ] = value ;
}


void stack_order ( Stack* stack )
{
    for ( int i = 0 ; i <= stack->top ; i ++ )
        {
            for ( int j = 0 ; j < stack->top - i ; j ++ )
                {
                    if ( stack->items [j] > stack->items [j + 1] )
                        {
                            int tmp = stack->items [j] ;
                            stack->items [j] = stack->items [j + 1] ;
                            stack->items [j + 1] = tmp ;
                        }
                }
        }
}


void display ( Stack* stack ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack is empty !\n" ) ;
            return ;
        }
    for ( int i = 0 ; i <= stack->top ; i ++ ) 
        printf ( " %d" , stack->items [i] ) ;
}


int main ()
{
    Stack stack ;

    init ( &stack ) ;

    push ( &stack , 1 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 8 ) ;

    printf ( "\n\n* Original stack : " ) ;
    display ( &stack ) ;

    stack_order ( &stack ) ;
    printf ( "\n\n* Sorted stack : " ) ;
    display ( &stack ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}