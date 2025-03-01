


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node 
        {
            int data ;
            struct Node* next ;
        } Node ;
    
typedef struct Queue
        {
            Node* front ;
            Node* back ;
        } Queue ;


Queue* init ()
{
    Queue* queue = ( Queue* ) malloc ( sizeof ( Queue ) ) ;
    queue->front = NULL ;
    queue->back = NULL ;
    return queue ;
}


Node* new_node ( int value )
{
    Node* node = ( Node* ) malloc ( sizeof ( Node ) ) ;
    node->data = value ;
    node->next = NULL ;
    return node ; 
} 


bool is_Empty ( Queue* queue ) {
    return queue->front == NULL ;
}


void enqueue ( Queue* queue , int value )
{
    Node* node = new_node ( value ) ;
    if ( node == NULL ) return ;

    if ( is_Empty ( queue ) ) 
        {
            queue->back = node ;
            queue->front = node ;
        }
        else
            {
                queue->back->next = node ;
                queue->back = node ;
            }
}


void display ( Queue* queue )
{
    Node* current = queue->front ;
    while ( current != NULL )
        {
            printf ( " %d " , current->data ) ;
            current = current->next ; 
        }
}


void dequeue ( Queue *queue ) 
{
    if ( is_Empty ( queue ) ) return ;

    Node* tmp = queue->front ;
    queue->front = queue->front->next ;
    if ( queue->front == NULL ) 
        queue->back = NULL ; 
        
    free ( tmp ) ;
}


void delete ( Queue* queue , int n ) 
{
    if ( is_Empty ( queue ) ) 
        {
            printf ( "\n\n* Error : Queue is empty, cannot delete." ) ;
            return ;
        }

    Node* current = queue->front ;
    int count = 0 ;
    while ( current != NULL ) 
        {
            count ++ ;
            current = current->next ;
        }

    if ( n > count ) 
        {
            printf ( "\n\n* Error : Invalid position" ) ;
            return ;
        }

    for ( int i = 1 ; i <= n ; i ++ )  
        {
            dequeue ( queue ) ;
        }   

    printf ( "\n\n* Queue elements are : " ) ;
    display ( queue ) ;
}


void free_queue ( Queue* queue ) 
{
    while ( !is_Empty ( queue ) )  dequeue ( queue ) ;
    free ( queue ) ;
}


int main ()
{
    int pos ;
    Queue* queue = init () ;

    enqueue ( queue , 1 ) ;
    enqueue ( queue , 2 ) ;
    enqueue ( queue , 3 ) ;
    enqueue ( queue , 4 ) ;
    enqueue ( queue , 5 ) ;

    printf ( "\n\n* Insert some elements into the queue " ) ;
    printf ( "\n\n* Queue elements are : " ) ;
    display ( queue ) ;

    
    pos = 7 ;
    printf ( "\n\n\n* Delete the %dth element of the said queue " , pos ) ;
    delete ( queue , pos ) ;

    pos = 3 ;
    printf ( "\n\n\n* Delete the %dth element of the said queue " , pos ) ;
    delete ( queue , pos ) ;
    printf ( "\n\n\n" ) ;
    free_queue ( queue ) ;
    return 0 ;
}