



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


List* merge_alternate_Nodes ( List* head_1 , List* head_2 , List* head_3 ) 
{
    List* fir_current = head_1 ;
    List* sec_current = head_2 ;

    while ( fir_current != NULL  ||  sec_current != NULL )
        {
            if ( fir_current != NULL )
                {
                    head_3 = push_back ( head_3 , fir_current->val ) ;
                    fir_current = fir_current->next ;
                }
            if ( sec_current != NULL )
                {
                    head_3 = push_back ( head_3 , sec_current->val ) ;
                    sec_current = sec_current->next ;
                }
        }

    return head_3 ;
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
    List* head_1 = init () ; 
    List* head_2 = init () ;
    List* head_3 = init () ;


    head_1 = push_back ( head_1 , 1 ) ;
    head_1 = push_back ( head_1 , 3 ) ;
    head_1 = push_back ( head_1 , 5 ) ;
    head_1 = push_back ( head_1 , 7 ) ;
    head_1 = push_back ( head_1 , 9 ) ;

    printf ( "\n\n* First linked list : " ) ;
    print_list ( head_1 ) ;

    
    head_2 = push_back ( head_2 , 2 ) ;
    head_2 = push_back ( head_2 , 4 ) ;
    head_2 = push_back ( head_2 , 6 ) ;
    head_2 = push_back ( head_2 , 8 ) ;

    printf ( "* Second linked list : " ) ;
    print_list ( head_2 ) ;


    head_3 = merge_alternate_Nodes ( head_1 , head_2 , head_3 ) ;
    printf ( "* Merged linked list: " ) ;
    print_list ( head_3 ) ;

    printf ( "\n\n\n" ) ;
    free_list ( head_1 ) ;
    free_list ( head_2 ) ;
    free_list ( head_3 ) ;
    
    return 0 ;
}