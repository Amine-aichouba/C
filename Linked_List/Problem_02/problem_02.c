


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
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( node == NULL ) 
        {
            perror ( "Error !!" ) ;
            exit (1) ;
        }
    node->val = val ;
    node->next = NULL ;
    if ( head == NULL )  return node ; 
    
    List* current = head ;
    while ( current->next != NULL )  current = current->next ;
    current->next = node ;

    return head ; 
}

List* reverse_list ( List* head ) 
{
    List* current = head ;
    List* prev = NULL ;
    List* next = NULL ; 

    while ( current != NULL ) 
        {
            next = current->next ; 
            current->next = prev ; 
            prev = current ;       
            current = next ;   
        }
    return prev ;
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

void free_list ( List *head )  
{
    List *current = head ;
    while ( current != NULL ) 
        {
            List *tmp = current ;
            current = current->next ;
            free ( tmp ) ;
        }
}


int main ()
{
    int num , i , val ;
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

    head = reverse_list ( head ) ;

    printf ( "\n\n* The list in reverse are : " ) ;
    print_list ( head ) ;

    free_list ( head ) ;
    
    printf ( "\n\n\n" ) ;
    return 0 ;
}