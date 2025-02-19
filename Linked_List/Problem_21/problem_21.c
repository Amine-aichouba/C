


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


void pair_sum ( List** head , int val ) 
{
    List* current = *head ;
    List* tmp ;
    int ctr = 0 ;
    while ( current != NULL )
        {
            tmp = current->next ;
            while ( tmp != NULL )
                { 
                    if ( tmp->val + current->val == val )  
                        {
                            printf ( " ( %d , %d ) " , current->val , tmp->val ) ;
                            ctr ++ ;
                        }
                    tmp = tmp->next ;
                }
            current = current->next ;
        }
    if ( ctr == 0 )  printf ( "Pair not found" ) ;
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
    head = push_back ( head , 6 ) ;
    head = push_back ( head , 7 ) ;


    printf ( "\n\n* Original singly linked list : " ) ;
    print_list ( head ) ;

    printf ( "\n* Find a pair whose sum is equal to  4 : " ) ;
    pair_sum ( &head , 4 ) ;

    printf ( "\n\n* Find a pair whose sum is equal to 11 : " ) ;
    pair_sum ( &head , 11 ) ;

    printf ( "\n\n* Find a pair whose sum is equal to  5 : " ) ;
    pair_sum ( &head , 5 ) ;

    printf ( "\n\n* Find a pair whose sum is equal to 14 : " ) ;
    pair_sum ( &head , 14 ) ;

    printf ( "\n\n\n" ) ;
    free_list ( head ) ;

    return 0 ;
}

