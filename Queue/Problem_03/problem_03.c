


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


bool is_Empty ( Queue* queue ) {
    return queue->front == NULL ;
}


void enqueue ( Queue* queue , int value )
{
    Node* new_node = ( Node* ) malloc ( sizeof ( Node ) ) ;
    if ( new_node == NULL ) return ;

    new_node->data = value ;
    new_node->next = NULL ;

    if ( is_Empty ( queue ) ) 
        {
            queue->front = new_node ;
            queue->back = new_node ;
        }
        else 
            {
                queue->back->next = new_node ;
                queue->back = new_node ;
            }
}


void display_queue ( Queue* queue )
{
    Node* current = queue->front ;
    while ( current != NULL )
        {
            printf ( " %d " , current->data ) ;
            current = current->next ;
        }
}


void free_queue ( Queue* queue )
{
    Node* current = queue->front ;
    while ( current != NULL ) 
        {
            Node* tmp = current ;
            current = current->next ;
            free ( tmp ) ;
        }
}


int main ()
{
    Queue* queue = init () ;

    printf ( "\n\n* Check the queue is empty or not ? : %s " , ( is_Empty ( queue ) ) ? "Yas" : "No" ) ;
    
    enqueue ( queue , 1 ) ;
    enqueue ( queue , 2 ) ;
    enqueue ( queue , 3 ) ;

    printf ( "\n\n\n* Insert some elements into the queue " ) ;
    printf ( "\n\n* Queue elements are : " ) ;
    display_queue ( queue ) ;


    printf ( "\n\n\n* Insert another element into the queue " ) ;
    enqueue ( queue , 4 ) ;

    printf ( "\n\n* Queue elements are : " ) ;
    display_queue ( queue ) ;

    printf ( "\n\n* Check the queue is empty or not ? : %s " , ( is_Empty ( queue ) ) ? "Yas" : "No" ) ;

    printf ( "\n\n\n" ) ; 
    free_queue ( queue ) ;

    return 0 ;
}