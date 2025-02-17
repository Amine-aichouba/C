


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

List* push_end ( List* head , int val ) 
{
    List* current = head ;
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( !node )
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
            printf ( " %2d" , current->val ) ;
            current = current->next ;
        }
}


int number_nodes ( List* head ) 
{
    int ctr = 0 ;
    List* tmp = head ;
    
    while ( tmp != NULL ) 
        {
            ++ ctr ;
            tmp = tmp->next ;
        }
    return ctr ;
}


void free_list ( List* head )
{
    List* current = head ;
    while ( current != NULL )
        {
            List* tmp = current ;
            current = current->next ;
            free ( tmp ) ;
        }
}


int main ()
{
    List* head = init () ;
    int num , i , val ;

    printf ( "\n\n* Enter the number of nodes : " ) ;
    scanf ( " %d" , &num ) ;

    printf ( "\n" ) ;
    for ( i = 1 ; i <= num ; i ++ )
        {
            printf ( "\n* Enter data for node %d : " , i ) ;
            scanf ( " %d" , &val ) ;
            head = push_end ( head , val ) ;
        }  

    printf ( "\n\n* Data entered in the list : " ) ;
    print_list ( head ) ;

    printf ( "\n\n* Total number of nodes : %d " , number_nodes ( head ) ) ;
    printf ( "\n\n\n" ) ;
    
    free_list ( head ) ;
    return 0 ;
}