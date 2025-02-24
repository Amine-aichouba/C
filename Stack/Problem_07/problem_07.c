


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100


typedef struct 
    { 
        int top ;
        char items [MAX] ;
    } Stack ;


void init ( Stack* stack ) {
    stack->top = -1 ;
}


int is_Empty ( Stack* stack ) {
    return stack->top == -1 ;
}


bool is_Full ( Stack* stack ) {
    return stack->top == MAX - 1 ;
}


void push ( Stack* stack , char data ) 
{
    if ( is_Full ( stack ) ) 
        {
            printf ( "Stack Overflow! Cannot push \n" ) ;
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



int is_Balanced ( const char* expression )  
{
    Stack stack ;
    init ( &stack ) ;
    
    for ( int i = 0 ; i < ( int ) strlen ( expression ) ; i ++ ) 
        {
            char current = expression [i] ;

            if ( current == '(' || current == '{' || current == '[' ) 
                push ( &stack , current ) ;
            else if ( current == ')' || current == '}' || current == ']' ) 
                    {
                        if ( is_Empty ( &stack ) )  return 0 ;

                        char top ;
                        if ( !pop ( &stack , &top ) )  return 0 ; 
                        if ( ( current == ')' && top != '(' ) ||
                             ( current == '}' && top != '{' ) ||
                             ( current == ']' && top != '[' ) ) 
                                return  0 ;  
                    }
        }
    return is_Empty ( &stack ) ;
}


int main () 
{
    char expression [ MAX ] ;
    int ctr = 0 ;
    while ( ctr < 5 ) 
        {
            printf ( "\n\n* Enter an expression in parentheses : " ) ;
            fgets ( expression , MAX , stdin ) ;

            expression [ strcspn ( expression , "\n" ) ] = 0 ;
            
            if ( is_Balanced ( expression ) ) 
                printf ( "\n\n* The expression is balanced.\n" ) ;
            else 
                printf ( "\n\n* The expression is not balanced.\n" ) ;

            ctr ++ ;
        }
    printf ( "\n\n\n" ) ;
    return 0 ;
}
