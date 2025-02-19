


#include <stdio.h>
#include <stdlib.h>


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


List* swap ( List* head ) 
{
    if ( head == NULL || head->next == NULL )  return head ; 
     
    List* new_head = head->next ; 
    List* prev = NULL ;
    List* current = head ;

    while ( current != NULL && current->next != NULL ) 
    {
        List* next_pair = current->next->next ; 
        List* second = current->next ; 
        second->next = current ; 
        current->next = next_pair ; 
        if ( prev != NULL )  prev->next = second ; 
        prev = current ;
        current = next_pair ;
    }
    return new_head ; 
}


void print_list ( List* head ) 
{
    List* current = head ;
    while ( current != NULL )
        {
            printf ( "  %d" , current->val ) ;
            current = current->next ;
        }
    printf ( "\n\n" ) ;
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
    List* head = init () ; 
    
    head = push_back ( head , 1 ) ;
    head = push_back ( head , 2 ) ;
    head = push_back ( head , 3 ) ;
    head = push_back ( head , 4 ) ;
    head = push_back ( head , 5 ) ;


    printf ( "\n\n* Original singly linked list : " ) ;
    print_list ( head ) ;

    head = swap ( head ) ;

    printf ( "\n* Updated List after swapping every two adjacent nodes : " ) ;
    print_list ( head ) ;
    
    printf ( "\n\n\n" ) ;
    free_list ( head ) ;

    return 0 ;
}
