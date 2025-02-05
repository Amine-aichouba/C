


#include <stdio.h>


#define MAX_SIZE 100

typedef struct 
        {
            int arr [MAX_SIZE] ;
            int front , rear ;
        } Queue ;


void initialize_queue ( Queue *queue ) 
{
    queue->front = -1 ;
    queue->rear = -1 ;
}


int is_empty ( Queue *queue ) 
{
    return ( queue->front == -1 && queue->rear == -1 ) ;
}


int is_full ( Queue *queue ) 
{
    return ( queue->rear == MAX_SIZE - 1 ) ;
}


void enqueue ( Queue *queue , int value ) 
{
    if ( is_full ( queue ) )  
        {
            printf ( "\n\n\t * Queue is full. Cannot enqueue.\n" ) ;
            return ;
        }

    if ( is_empty ( queue ) )  
        {
            queue->front = 0 ;
            queue->rear = 0 ;
        }else 
            queue->rear = ( queue->rear + 1 ) % MAX_SIZE ;
    
    queue->arr [ queue->rear ] = value ;
    printf ( "\n\n\t * Enqueued : %d " , value ) ;
}


int dequeue ( Queue *queue ) 
{
    int value ;

    if ( is_empty ( queue ) )  
        {
            printf ( "\n\t * Queue is empty. Cannot dequeue. " ) ;
            return -1 ;
        }

    value = queue->arr [ queue->front ] ;

    if ( queue->front == queue->rear )  
        {
            queue->front = -1 ;
            queue->rear = -1 ;
        } else 
            queue->front = ( queue->front + 1 ) % MAX_SIZE ;
    
    printf ( "\n\n\t * Dequeued : %d " , value ) ;
    return value ;
}

int main () 
{
    Queue my_queue ;
    
    initialize_queue ( &my_queue ) ;

    enqueue ( &my_queue , 100 ) ;
    enqueue ( &my_queue , 200 ) ;
    enqueue ( &my_queue , 300 ) ;

    dequeue ( &my_queue ) ;
    dequeue ( &my_queue ) ;

    enqueue ( &my_queue , 400 ) ;
    enqueue ( &my_queue , 500 ) ;

    dequeue ( &my_queue ) ;
    dequeue ( &my_queue ) ;

    printf ( "\n\n\n" ) ;
    return 0 ;
}
