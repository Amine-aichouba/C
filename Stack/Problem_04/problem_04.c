


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 30

typedef struct 
    {
        int top ;
        char items [MAX] ;
    } Stack ;


void init ( Stack* stack ) {
    stack->top = -1 ;
}


bool is_Empty ( Stack* stack ) {
    return stack->top == -1;
}


bool is_Full ( Stack* stack ) {
    return stack->top == MAX - 1 ;
}


void push ( Stack* stack , char data ) 
{
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow! Cannot push '%c'\n" , data ) ;
            return ;
        }
    stack->items [ ++ ( stack->top ) ] = data ;
}


bool pop ( Stack* stack , char* data ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack Underflow! Cannot pop from an empty stack.\n" ) ;
            return false ;
        }
    *data = stack->items [ ( stack->top ) -- ] ;
    return true ;
}


void display ( Stack* stack ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack is empty !\n" ) ;
            return ;
        }
    for ( int i = 0 ; i <= stack->top ; i ++ ) 
        printf ( "%c" , stack->items [i] ) ;
}


int main () 
{
    char ch = '\0' ;
    int i = 0 ;
    Stack stack ;
    init ( &stack ) ;


    printf ( "\n\n* Enter a string : " ) ;
    while ( ch != '\n' && i < MAX - 1 ) 
        {
            scanf ( "%c" , &ch ) ;
            if ( ch != '\n' ) 
                {
                    push ( &stack , ch ) ;
                    i ++ ;
                }
        }

    printf ( "\n* Reversed string using a stack is : " ) ;
    while ( !is_Empty ( &stack ) ) 
        {
            if ( pop ( &stack , &ch ) ) 
                printf ( "%c" , ch ) ;
        }
    printf ( "\n\n\n" ) ;

    return 0 ;
}