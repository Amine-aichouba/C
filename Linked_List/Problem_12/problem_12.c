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


List* push_front ( List* head , int val ) 
{
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( node == NULL )  
        {
            perror ( "Memory allocation failed" ) ;
            exit (1) ;
        }
    node->val = val ;
    node->next = head ;

    return node ;
}


List* list_order ( List* head , int val ) 
{
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( node == NULL ) 
        {
            perror ( "Memory allocation failed" ) ;
            exit (1) ;
        }
    node->val = val ;
    node->next = NULL ;

    List* current = head ;
    List* prev = NULL ;

    while ( current != NULL && current->val < val ) 
        {
            prev = current ;
            current = current->next ;
        }

    if ( prev == NULL ) 
        {
            node->next = head ;
            head = node ;
        } 
        else 
            {
                prev->next = node ;
                node->next = current ;
            }

    return head ;
}


List* merge_two_Lists ( List* head , List* fir_head , List* sec_head ) 
{
    List* first_curr = fir_head ;
    List* second_curr = sec_head ;

    while ( first_curr != NULL ) 
        {
            head = list_order ( head , first_curr->val ) ;
            first_curr = first_curr->next ;
        }

    while ( second_curr != NULL ) 
        {
            head = list_order ( head , second_curr->val ) ;
            second_curr = second_curr->next ;
        }

    return head ;
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
    List* fir_head = init () ;
    List* sec_head = init () ;


    fir_head = push_front ( fir_head , 7 ) ;
    fir_head = push_front ( fir_head , 5 ) ;
    fir_head = push_front ( fir_head , 3 ) ;
    fir_head = push_front ( fir_head , 1 ) ;

    sec_head = push_front ( sec_head , 6 ) ;
    sec_head = push_front ( sec_head , 4 ) ;
    sec_head = push_front ( sec_head , 2 ) ;

    printf ( "\n\n* Two sorted singly linked lists : " ) ;
    printf ( "\n\n* First list : " ) ;
    print_list ( fir_head ) ;

    printf ( "\n\n* Second list : " ) ;
    print_list ( sec_head ) ;

    head = merge_two_Lists ( head , fir_head , sec_head ) ;
    printf ( "\n\n* After merging the said two sorted lists : " ) ;
    print_list ( head ) ;

    printf ( "\n\n\n" ) ;

    free_list ( head ) ;
    free_list ( fir_head ) ;
    free_list ( sec_head ) ;

    return 0 ;
}