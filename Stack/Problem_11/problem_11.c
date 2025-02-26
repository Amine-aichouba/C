


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX 15


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
    return stack->top == MAX ;
}


void push ( Stack* stack , int value )
{
    if ( is_Full ( stack ) )  return ;
    stack->items [ ++ ( stack->top ) ] = value ;
}


void display_stack ( Stack* stack )
{
    if ( is_Empty ( stack ) )  return ;
    for ( int i = 0 ; i <= stack->top ; ++ i )
        {
            printf ( "  %d" , stack->items [i] ) ;
        }
}


int minimum ( Stack* stack )
{
    int min = INT_MAX , i = 0 ;
    while ( i <= stack->top )
        {
            if ( min > stack->items [i] ) 
                {
                    min = stack->items [i] ;
                }
            ++ i ;
        }
    return min ;
}


void free_stack ( Stack* stack )
{
    free ( stack->items ) ;
    free ( stack ) ;
}


int main ()
{
    Stack* stack_1 = init () ;
    int min = 0 ;

//  -------------------------------- Stack 01 ------------------------------------ 

    push ( stack_1 , 9 ) ;
    push ( stack_1 , 2 ) ;
    push ( stack_1 , 4 ) ;
    push ( stack_1 , 2 ) ;
    push ( stack_1 , 4 ) ;

    printf ( "\n\n* Current stack elements : " ) ;
    display_stack ( stack_1 ) ;

    min = minimum ( stack_1 ) ;
    printf ( "\n\n* Minimum element : %d \n" , min ) ;
    
    free_stack ( stack_1 ) ;

  //  -------------------------------- Stack 02 ------------------------------------ 

    Stack* stack_2 = init () ;

    push ( stack_2 , 9 ) ;
    push ( stack_2 , 2 ) ;
    push ( stack_2 , 4 ) ;

    printf ( "\n\n* Current stack elements : " ) ;
    display_stack ( stack_2 ) ;

    min = minimum ( stack_2 ) ;
    printf ( "\n\n* Minimum element : %d \n" , min ) ;
    
    free_stack ( stack_2 ) ;

//  -------------------------------- Stack 03 ------------------------------------ 

    Stack* stack_3 = init () ;

    push ( stack_3 , 9 ) ;
    push ( stack_3 , 4 ) ;
    push ( stack_3 , 2 ) ;
    push ( stack_3 , 1 ) ;

    printf ( "\n\n* Current stack elements : " ) ;
    display_stack ( stack_3 ) ;

    min = minimum ( stack_3 ) ;
    printf ( "\n\n* Minimum element : %d \n" , min ) ;
    
    free_stack ( stack_3 ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}