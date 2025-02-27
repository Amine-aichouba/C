

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 5 


typedef struct Queue
        {
            int items [MAX_SIZE] ;
            int front ;
            int back ;
        } Queue ;


void init ( Queue* queue ) 
{
    queue->front = -1 ;
    queue->back = -1 ;
}


bool is_Empty ( Queue* queue ) {
    return queue->front == -1 ;
}


bool is_Full ( Queue* queue ) {
    return ( queue->back + 1 ) % MAX_SIZE == queue->front ;
}


void enqueue ( Queue *queue , int value ) 
{
    if ( is_Full ( queue ) )  return ;

    if ( is_Empty ( queue ) ) queue->front = 0 ;
    
    queue->back = ( queue->back + 1 ) % MAX_SIZE ;
    queue->items [ queue->back ] = value ;
}


void dequeue ( Queue* queue ) 
{
    if ( is_Empty ( queue ) )  return ;
    if ( queue->front == queue->back ) 
        init ( queue ) ;
    else 
        queue->front = ( queue->front + 1 ) % MAX_SIZE ;
}


void display_queue ( Queue* queue ) 
{
    if ( is_Empty ( queue ) )  return ;
    
    int i = queue->front ;
    while ( i != queue->back + 1 ) 
        {
            printf ( " %d " , queue->items [i] ) ;
            i = ( i + 1 ) % MAX_SIZE ;
        }
}


int main ()
{
    Queue queue ;

    init ( &queue ) ;

    printf ( "\n\n* Check the queue is empty or not ? : %s " , ( is_Empty ( &queue ) ) ? "Yas" : "No" ) ;
    
    enqueue ( &queue , 1 ) ;
    enqueue ( &queue , 2 ) ;
    enqueue ( &queue , 3 ) ;

    printf ( "\n\n\n* Insert some elements into the queue " ) ;
    printf ( "\n\n* Queue elements are : " ) ;
    display_queue ( &queue ) ;


    printf ( "\n\n\n* Insert another element into the queue " ) ;
    enqueue ( &queue , 4 ) ;

    printf ( "\n\n* Queue elements are : " ) ;
    display_queue ( &queue ) ;

    printf ( "\n\n* Check the queue is empty or not ? : %s " , ( is_Empty ( &queue ) ) ? "Yas" : "No" ) ;

    printf ( "\n\n\n" ) ; 

    return 0 ;
}