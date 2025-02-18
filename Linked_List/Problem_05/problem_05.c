


#include <stdio.h>
#include <stdlib.h>


typedef struct List
        {
            int val ;
            struct List* next ;
        } List ;

List* init () ;
List* push_back ( List* head , int val ) ;
void print_list ( List* head ) ;
void free_list ( List* head ) ;


int main ()
{
    int i , num , val ;
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

    printf ( "\n\n* Enter data to insert at the end of the list : " ) ;
    scanf ( " %d" , &val ) ;
    head = push_back ( head , val ) ;


    printf ( "\n\n* Data after inserted in the list are : " ) ;
    print_list ( head ) ;
    printf ( "\n\n\n" ) ;
    
    free_list ( head ) ;
    return 0 ;
}


List* init () {
    return NULL ;
}

List* push_back ( List* head , int val ) 
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