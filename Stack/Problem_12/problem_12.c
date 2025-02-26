


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


int maximum ( Stack* stack )
{
    int max = INT_MIN , i = 0 ;
    while ( i <= stack->top )
        {
            if ( max < stack->items [i] ) 
                {
                    max = stack->items [i] ;
                }
            ++ i ;
        }
    return max ;
}


void free_stack ( Stack* stack )
{
    free ( stack->items ) ;
    free ( stack ) ;
}


int main ()
{
    Stack* stack_1 = init () ;
    int max = 0 ;

//  -------------------------------- Stack 01 ------------------------------------ 

    push ( stack_1 , 5 ) ;
    push ( stack_1 , 2 ) ;
    push ( stack_1 , 1 ) ;
    push ( stack_1 , 6 ) ;
    push ( stack_1 , 8 ) ;

    printf ( "\n\n* Current stack elements : " ) ;
    display_stack ( stack_1 ) ;

    max = maximum ( stack_1 ) ;
    printf ( "\n\n* Maximum element : %d \n" , max ) ;
    
    free_stack ( stack_1 ) ;

  //  -------------------------------- Stack 02 ------------------------------------ 

    Stack* stack_2 = init () ;

    push ( stack_2 , 5 ) ;
    push ( stack_2 , 2 ) ;
    push ( stack_2 , 1 ) ;

    printf ( "\n\n* Current stack elements : " ) ;
    display_stack ( stack_2 ) ;

    max = maximum ( stack_2 ) ;
    printf ( "\n\n* Maximum element : %d \n" , max ) ;
    
    free_stack ( stack_2 ) ;

//  -------------------------------- Stack 03 ------------------------------------ 

    Stack* stack_3 = init () ;

    push ( stack_3 , 5 ) ;
    push ( stack_3 , 2 ) ;
    push ( stack_3 , 1 ) ;
    push ( stack_3 , 10 ) ;

    printf ( "\n\n* Current stack elements : " ) ;
    display_stack ( stack_3 ) ;

    max = maximum ( stack_3 ) ;
    printf ( "\n\n* Maximum element : %d \n" , max ) ;
    
    free_stack ( stack_3 ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}