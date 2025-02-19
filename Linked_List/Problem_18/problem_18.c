


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


List* remove_odd_numbers ( List* head ) 
{
    List* current = head ;
    List* prev = NULL ;

    while ( current != NULL ) 
        {
            if ( current->val % 2 == 1 ) 
                { 
                    if ( prev == NULL ) 
                        { 
                            head = current->next ; 
                            List* tmp = current ;
                            current = current->next ;
                            free ( tmp ) ; 
                        } 
                        else 
                            {
                                prev->next = current->next ; 
                                List* tmp = current ;
                                current = current->next ; 
                                free ( tmp ) ; 
                            }
                } 
                else 
                    {
                        prev = current ; 
                        current = current->next ; 
                    }
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

    head = push_back ( head , 7 ) ;
    head = push_back ( head , 6 ) ;
    head = push_back ( head , 5 ) ;
    head = push_back ( head , 4 ) ;
    head = push_back ( head , 3 ) ;
    head = push_back ( head , 2 ) ;
    head = push_back ( head , 1 ) ;

    printf ( "\n\n* Original linked list : " ) ;
    print_list ( head ) ;

    head = remove_odd_numbers ( head ) ;
    
    printf ( "* Linked list after removing odd indices : " ) ;
    print_list ( head ) ;

    printf ( "\n\n\n" ) ;
    free_list ( head ) ;
    
    return 0 ;
}