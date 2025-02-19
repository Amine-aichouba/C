


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


void detec_and_remove_loop ( List* head ) 
{
    if ( head == NULL || head->next == NULL ) return ;
    
    List* slow = head ; 
    List* fast = head ; 

    while ( ( fast != NULL )  &&  ( fast->next != NULL ) ) 
        {
            slow = slow->next ;         
            fast = fast->next->next ;    
            if ( slow == fast )  break ; 
        }

    if ( slow == fast ) 
        {
            slow = head ; 
            while ( slow->next != fast->next ) 
                {
                    slow = slow->next ; 
                    fast = fast->next ; 
                }
            fast->next = NULL ; 
            printf ( "Loop detected and removed.\n" ) ;
        } 
        else 
            printf ( "No loop detected.\n" ) ;
}


int main () 
{
    List* head = init () ;

    head = push_back ( head , 1 ) ;
    head = push_back ( head , 2 ) ;
    head = push_back ( head , 3 ) ;
    head = push_back ( head , 4 ) ;
    head = push_back ( head , 5 ) ;
    head = push_back ( head , 6 ) ;
    head = push_back ( head , 7 ) ;
    head = push_back ( head , 8 ) ;
    head = push_back ( head , 9 ) ;
  

    printf ( "\n\n* Original singly linked list : " ) ;
    print_list ( head ) ;

    printf ( "\n\n* Create the loop " ) ;
	head->next->next->next->next->next->next->next->next->next = head->next->next ;

    detec_and_remove_loop ( head ) ;
    printf ( "\n\n* After removing the said loop : " ) ; 
    print_list ( head ) ; 

    printf ( "\n\n\n" ) ;
    free_list ( head ) ;
   
    return 0 ;
}