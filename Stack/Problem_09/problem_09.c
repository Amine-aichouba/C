#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100


typedef struct 
        {
            int items [MAX] ;
            int top1 ; 
            int top2 ; 
        } two_stacks ;


void init ( two_stacks* stacks ) 
{
    stacks->top1 = -1 ; 
    stacks->top2 = MAX ; 
}



bool is_Empty_1 ( two_stacks* stacks ) {
    return stacks->top1 == -1 ;
}


bool is_Empty_2 ( two_stacks* stacks ) {
    return stacks->top2 == MAX ;
}


bool is_Full_1 ( two_stacks* stacks ) {
    return stacks->top1 + 1 == stacks->top2 ;
}


bool is_Full_2 ( two_stacks* stacks ) {
    return stacks->top2 - 1 == stacks->top1 ;
}


void push_1 ( two_stacks* stacks , int value ) 
{
    if ( is_Full_1 ( stacks ) )  return ;
    stacks->items [ ++ ( stacks->top1 ) ] = value ;
}


void push_2 ( two_stacks* stacks , int value ) 
{
    if ( is_Full_2 ( stacks ) )  return ;
    stacks->items [ -- ( stacks->top2 ) ] = value ;
}


bool pop_1 ( two_stacks* stacks , int* data ) 
{
    if ( is_Empty_1 ( stacks ) )  return false ;
    *data = stacks->items [ ( stacks->top1 ) -- ] ;
    return true ;
}


bool pop_2 ( two_stacks* stacks , int* data ) 
{
    if ( is_Empty_2 ( stacks ) )  return false ;
    *data = stacks->items [ ( stacks->top2 ) ++ ] ;
    return true ;
}


int main () 
{
    int data ;
    two_stacks stacks ;
    init ( &stacks ) ;

    push_1 ( &stacks , 1 ) ;
    push_1 ( &stacks , 2 ) ;
    push_1 ( &stacks , 3 ) ;

    push_2 ( &stacks , 10 ) ;
    push_2 ( &stacks , 20 ) ;
    push_2 ( &stacks , 30 ) ;

    
    while ( pop_1 ( &stacks , &data ) ) 
        {
            printf ( "\n  %d popped from stack 1 " , data ) ;
        }

    printf ( "\n\n" ) ;
    while ( pop_2 ( &stacks , &data ) ) 
        {
            printf ( "\n  %d popped from stack 2 " , data ) ;
        }
    
    printf ( "\n\n\n" ) ;
    
    return 0;
}