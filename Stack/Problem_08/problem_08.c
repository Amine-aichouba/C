


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_SIZE 100


typedef struct 
        {
            int items [MAX_SIZE] ;
            int top ;
        } Stack ;


void init ( Stack* stack ) {
    stack->top = -1 ;
}


bool is_Empty ( Stack* stack ) {
    return stack->top == -1 ;
}


bool is_Full ( Stack* stack ) {
    return stack->top == MAX_SIZE - 1 ;
}


void push ( Stack* stack , int value ) 
{
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow!\n" ) ;
            return ;
        }
    stack->items [ ++ ( stack->top ) ] = value ; 
}


void display ( Stack* stack ) 
{
    if ( is_Empty ( stack ) ) 
        {
            printf ( "Stack is empty!\n" ) ;
            return ;
        }
    printf ( "Stack elements : " ) ;
    for ( int i = 0 ; i <= stack->top ; i ++ ) 
        printf ( "%d " , stack->items [i] ) ;
}

 
int next_larger_item ( Stack* stack , int current )
{
    int next = current + 1 ;
    while ( next <= stack->top )
        {
            if ( stack->items [current] < stack->items [next] ) 
                return stack->items [next] ;
            next ++ ;
        }
    return -1 ;
}


int main () 
{
    Stack stack ;
    int i = 0 , tmp = 0 , current = 0 ;

    init ( &stack ) ;

    push ( &stack , 1 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 4 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 6 ) ;

    printf ( "\n\n* Elements in the array are : " ) ;
    display ( &stack ) ;
    printf ( "\n\n* The next larger elements are : \n" ) ;

    while ( i <= stack.top )
        {
            current = stack.items [i] ;
            tmp = next_larger_item ( &stack , i ) ;
            printf ( "\n  %d ---> %d " , current , tmp ) ;
            i ++ ;
        }

     
    init ( &stack ) ;

    push ( &stack , 6 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 4 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 1 ) ;
    push ( &stack , 0 ) ;

    printf ( "\n\n\n* Elements in the array are : " ) ;
    display ( &stack ) ;
    printf ( "\n\n* The next larger elements are : \n" ) ;

    i = 0 ; 
    while ( i <= stack.top )
        {
            current = stack.items [i] ;
            tmp = next_larger_item ( &stack , i ) ;
            printf ( "\n  %d ---> %d " , current , tmp ) ;
            i ++ ;
        }


    init ( &stack ) ;

    push ( &stack , 3 ) ;
    push ( &stack , 7 ) ;
    push ( &stack , 5 ) ;
    push ( &stack , 9 ) ;
    push ( &stack , 3 ) ;
    push ( &stack , 2 ) ;
    push ( &stack , 4 ) ;
    push ( &stack , 1 ) ;
    push ( &stack , 4 ) ;

    printf ( "\n\n\n* Elements in the array are : " ) ;
    display ( &stack ) ;
    printf ( "\n\n* The next larger elements are : \n" ) ;

    i = 0 ; 
    while ( i <= stack.top )
        {
            current = stack.items [i] ;
            tmp = next_larger_item ( &stack , i ) ;
            printf ( "\n  %d ---> %d " , current , tmp ) ;
            i ++ ;
        }
    printf ( "\n\n\n" ) ;
    return 0 ;
}