


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


List* find_intersection ( List* head_1 , List* head_2 )  
{
    List* fir_current = head_1 ;
    List* sec_current ;

    while ( fir_current != NULL ) 
        {
            sec_current = head_2 ;
            while ( sec_current != NULL ) 
                {
                    if ( fir_current == sec_current )  return fir_current ; 
                    sec_current = sec_current->next ;
                }
            fir_current = fir_current->next ;
        }
    return NULL ;  
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
    List* head_4 = init () ;
 

    head_1 = push_back ( head_1 , 1 ) ;
    head_1 = push_back ( head_1 , 2 ) ;
    head_1 = push_back ( head_1 , 3 ) ;
    head_1 = push_back ( head_1 , 4 ) ;

    head_2 = push_back ( head_2 , 5 ) ;
    head_2->next = head_1->next->next ;

    printf ( "\n\n * Original lists \n\n" ) ;
    print_list ( head_1 ) ; 
    print_list ( head_2 ) ;

    List* intersection = find_intersection ( head_1 , head_2 ) ;
    if ( intersection != NULL ) 
        printf ( "* Intersection found at %d \n" , intersection->val ) ;
    else 
        printf ( "* Intersection not found.\n" ) ;
    
    head_2->next = NULL ;
    free_list ( head_1 ) ;
    free_list ( head_2 ) ;


    head_3 = push_back ( head_3 , 1 ) ;
    head_3 = push_back ( head_3 , 2 ) ;
    head_3 = push_back ( head_3 , 3 ) ;
    head_3 = push_back ( head_3 , 4 ) ;

    head_4 = push_back ( head_4 , 5 ) ;
    head_4 = push_back ( head_4 , 3 ) ;
    head_4 = push_back ( head_4 , 4 ) ;

    printf ( "\n\n\n* Original lists \n\n" ) ;
    print_list ( head_3 ) ; 
    print_list ( head_4 ) ;


    List* junction = find_intersection ( head_3 , head_4 ) ;
    if ( junction != NULL ) 
        printf ( "* Intersection found at %d \n" , junction->val ) ;
    else 
        printf ( "* Intersection not found. " ) ;
    
    printf ( "\n\n\n" ) ;
    free_list ( head_3 ) ;
    free_list ( head_4 ) ;

    return 0 ;
}