


#include <stdio.h>
#include <stdlib.h>

#define MAX 50


typedef struct Stack 
    {
        int top ;
        int items [MAX] ;
    } Stack ;


void init ( Stack* stack ) {
    stack->top = -1 ;
}


void push ( Stack* stack , int data ) 
{
    if ( stack->top == MAX - 1 ) return ; 
    stack->items [ ++ ( stack->top ) ] = data ;
}


void print_stack ( Stack* stack ) 
{
    if ( stack->top == -1 )  return ;
    for ( int i = 0 ; i <= stack->top ; i ++ )
        printf ( "  %d" , stack->items [i] ) ;
}


double average ( Stack* stack ) 
{
    if ( stack->top == -1 )  return 0 ; 
    double result = 0.0 ;
    for ( int i = 0 ; i <= stack->top ; i ++ ) 
        result += stack->items [i] ;
    return  result / ( double ) ( stack->top + 1 ) ; 
}


int main () 
{
    Stack stack ;
    init ( &stack ) ;

    push ( &stack , 6 ) ;
    push ( &stack , 4 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 1 ) ;

    printf ( "\n\n* Elements of the stack : " ) ;
    print_stack ( &stack ) ; 
    printf ( "\n\n* Average of the said stack values : %.2lf" , average ( &stack ) ) ;


    init ( &stack ) ;

    push ( &stack , 4 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 1 ) ;

    printf ( "\n\n\n* Elements of the stack : " ) ;
    print_stack ( &stack ) ; 
    printf ( "\n\n* Average of the said stack values : %.2lf " , average ( &stack ) ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}