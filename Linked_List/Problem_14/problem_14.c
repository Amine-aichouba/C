


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


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


List* push_front ( List* head , int val )
{
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( node == NULL )  
        {
            perror ( "\n\n* Error !! " ) ;
            exit (1) ;
        }
    node->val = val ;
    node->next = head ;

    return node ;
} 


bool is_palindrome ( List* head , List* sec_head ) 
{
    List* current = head ;
    List* sec_curr = NULL ;

    if ( head == NULL || head->next == NULL )  return false ;
    while ( current != NULL )
        {
            sec_head = push_front ( sec_head , current->val ) ;
            current = current->next ;
        }
    current = head ;
    sec_curr = sec_head ;

    while ( current != NULL )
        {
            if ( current->val != sec_curr->val )  return  false ;
            current = current->next ;
            sec_curr = sec_curr->next ;
        }
    return true ;
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
    List* head = init () ;
    List* sec_head = init () ;

    head = push_back ( head , 1 ) ;
    head = push_back ( head , 2 ) ;
    head = push_back ( head , 2 ) ;
    head = push_back ( head , 1 ) ;

    printf ( "\n\n* Original Singly List : " ) ;
    print_list ( head ) ;

    if ( is_palindrome ( head , sec_head ) ) 
        printf ( "\n\n* Linked list is a palindrome" ) ;
    else 
        printf ( "\n\n* Linked list is not a palindrome." ) ;

    printf ( "\n\n\n" ) ;
    free_list ( head ) ;
    free_list ( sec_head ) ;

    return 0 ;
}

