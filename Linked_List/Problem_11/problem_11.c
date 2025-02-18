


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct List
        {
            int val ;
            struct List* next ;
        } List ;


List* init () {
    return NULL ;
}


List* push_back ( List* head , int val )
{
    List* current = head ;
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( node == NULL )  
        {
            perror ( "\n\n* Error !! " ) ;
            exit (1) ;
        }
    node->val = val ;
    node->next = NULL ;

    if ( head == NULL )  return node ;

    while ( current->next != NULL )  current = current->next ;
    current->next = node ;

    return head ;
} 


char* list_to_string ( List* head ) 
{
    size_t size = 1 ;
    List* current = head ;
    char buffer [100] ; 
    char* result ;

    while ( current != NULL ) 
        {
            size += ( size_t ) snprintf ( buffer , sizeof ( buffer ) , "%d " , current->val ) ;
            current = current->next ;
        }

    result = ( char* ) malloc ( size ) ;
    if ( result == NULL ) 
        {
            perror ( "\n* Failed to allocate memory" ) ;
            exit (1) ;
        }
    result [0] = '\0' ;

    current = head ;
    while ( current != NULL ) 
        {
            snprintf ( buffer , sizeof ( buffer ) , "%d " , current->val ) ;
            strcat ( result , buffer ) ;
            current = current->next ;
        }

    if ( size > 1 )  result[size - 2] = '\0' ;     

    return result ;
}


void print_list ( List* head )
{
    List* current = head ;
    while ( current != NULL )
        {
            printf ( " %2d " , current->val ) ;
            current = current->next ;
        }
}


void free_list ( List* head )
{
    List* current = head ;
    List* tmp = NULL ;
    while ( current != NULL )
        {
            tmp = current ;
            current = current->next ;
            free ( tmp ) ;
        }
}


int main ()
{
    int i , num , val ;
    char* result ;
    List* head = init () ;

    printf ( "\n\n* Enter the number of nodes : " ) ;
    scanf ( " %d" , &num ) ;

    printf ( "\n" ) ;
    for ( i = 1 ; i <= num ; i ++ )
        {
            printf ( "\n* Enter data for node %d : " , i ) ;
            scanf ( " %d" , &val ) ;
            head = push_back ( head , val ) ;
        }  

    printf ( "\n\n* Data entered in the list : " ) ; 
    print_list ( head ) ;

    printf ( "\n\n\n* Return data entered in the list as a string : " ) ;
    result = list_to_string ( head ) ;

    printf ( "\n\n* The linked list : %s " , result ) ;
    printf ( "\n\n\n" ) ;
    free ( result ) ;
    free_list ( head ) ;

    return 0 ;
}


