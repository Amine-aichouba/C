


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


void split_list ( List* source , List** front , List** back ) 
{
    List* slow = source ;
    List* fast = source->next ;

    while ( fast != NULL ) 
        {
            fast = fast->next ;
            if ( fast != NULL ) 
                {
                    slow = slow->next ;
                    fast = fast->next ;
                }
        }
    *front = source ;
    *back = slow->next ;
    slow->next = NULL ;
}


List* merge_lists ( List* a , List* b ) 
{
    List* result = NULL ;

    if ( a == NULL )  return b ; 
    if ( b == NULL )  return a ;

    if ( a->val <= b->val ) 
        {
            result = a ;
            result->next = merge_lists ( a->next , b ) ;
        } 
        else 
            {
                result = b ;
                result->next = merge_lists ( a , b->next ) ;
            }
    return result ;
}


List* merge_sort ( List* head ) 
{
    if ( head == NULL || head->next == NULL ) return head ;
        
    List* front ;
    List* back ;

    split_list ( head , &front , &back ) ;

    front = merge_sort ( front ) ;
    back = merge_sort ( back ) ;

    return merge_lists ( front , back ) ;
}


void print_list ( List* head ) 
{
    List* current = head ;
    while ( current != NULL )
        {
            printf ( " %2d " , current->val ) ;
            current = current->next ;
        }
    printf ( "\n" ) ;
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


    head = push_back ( head , 2 ) ;
    head = push_back ( head , 3 ) ;
    head = push_back ( head , 1 ) ;
    head = push_back ( head , 7 ) ;
    head = push_back ( head , 5 ) ;

    printf ( "\n\n* Original Singly List : " ) ;
    print_list ( head ) ;

    head = merge_sort ( head ) ;

    printf ( "\n* After sorting the said list : " ) ;
    print_list ( head ) ;
    printf ( "\n\n\n" ) ;
    free_list ( head ) ;

    return 0 ;
}