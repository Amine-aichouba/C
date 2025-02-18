


#include <stdio.h>
#include <stdlib.h>


typedef struct List
        {
            int val ;
            struct List* next ;
        } List ;

List* init () ;
List* push_back ( List* head , int val ) ;
List* push_middle ( List* head , int val , int place ) ;
void print_list ( List* head ) ;
void free_list ( List* head ) ;


int main ()
{
    int i , num , val , place ;
    List* head = init () ;

    printf ( "\n\n* Enter the number of nodes ( 3 or more ) : " ) ;
    scanf ( " %d" , &num ) ;

    printf ( "\n" ) ;
    for ( i = 1 ; i <= num ; i ++ )
        {
            printf ( "\n* Enter data for node %d : " , i ) ;
            scanf ( " %d" , &val ) ;
            head = push_back ( head , val ) ;
        }  

    printf ( "\n* Data entered in the list : " ) ; 
    print_list ( head ) ;
    

    printf ( "\n\n\n* Enter data to insert in the middle of the list : " ) ;
    scanf ( " %d" , &val ) ;


    printf ( "\n* Enter the position to insert new node : " ) ;
    scanf ( " %d" , &place) ;
    head = push_middle ( head , val , place ) ;


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


List* push_middle ( List* head , int val , int place )
{
    int ctr = 0 ;
    List* next = head ;
    List* prev = NULL ;
    List* node = ( List* ) malloc ( sizeof ( List ) ) ;
    if ( node == NULL ) 
        {
            perror ( "\n\n* Error !!" ) ;
            exit (1) ;
        }
    node->val = val ;

    if ( place == 0 ) 
        {
            node->next = head ;
            return node ;
        }

    while ( next != NULL && ctr < place ) 
        {
            prev = next ;
            next = next->next ;
            ctr ++ ;
        }
    
    node->next = next ;
    prev->next = node ;
    
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