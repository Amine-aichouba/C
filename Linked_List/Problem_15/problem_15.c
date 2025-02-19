


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


List* remove_duplicate ( List* head ) 
{
    List* current = head ;

    while ( current != NULL && current->next != NULL ) 
        {
            if ( current->val == current->next->val ) 
                {
                    List* tmp = current->next ;
                    current->next = current->next->next ;
                    free ( tmp ) ;
                } 
                else 
                    current = current->next ;
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
    List* fir_head = init () ; 
    List* sec_head = init () ;

    fir_head = push_back ( fir_head , 1 ) ;
    fir_head = push_back ( fir_head , 2 ) ;
    fir_head = push_back ( fir_head , 3 ) ;
    fir_head = push_back ( fir_head , 3 ) ;
    fir_head = push_back ( fir_head , 4 ) ;

    printf ( "\n\n* Original Singly List : " ) ;
    print_list ( fir_head ) ;

    fir_head =  remove_duplicate ( fir_head ) ;

    printf ( "\n* After removing duplicate elements from the said singly list : " ) ; 
    print_list ( fir_head ) ;

    free_list ( fir_head ) ;


    sec_head = push_back ( sec_head , 1 ) ;
    sec_head = push_back ( sec_head , 2 ) ;
    sec_head = push_back ( sec_head , 3 ) ;
    sec_head = push_back ( sec_head , 3 ) ;
    sec_head = push_back ( sec_head , 4 ) ;
    sec_head = push_back ( sec_head , 4 ) ;

    printf ( "\n\n* Original Singly List : " ) ;
    print_list ( sec_head ) ;

    sec_head =  remove_duplicate ( sec_head ) ;

    printf ( "\n* After removing duplicate elements from the said singly list : " ) ; 
    print_list ( sec_head ) ;

    free_list ( sec_head ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}