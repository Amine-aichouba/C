


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
    if ( !node )
        {
            perror ( "\n\n* Error !! " ) ;
            exit (1) ;
        }
    node->val = val ;
    node->next = head ;
    return node ;
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

    printf ( "\n\n* Enter data to insert at the beginning of the list : " ) ;
    scanf ( " %d" , &val ) ;
    head = push_front ( head , val ) ;


    printf ( "\n\n* Data after inserted in the list are : " ) ;
    print_list ( head ) ;
    printf ( "\n\n\n" ) ;
    
    free_list ( head ) ;
    return 0 ;
}



