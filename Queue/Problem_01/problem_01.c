


#include <stdio.h>
#include <stdlib.h>

#define MAX 100 


typedef struct Queue 
    {
        int items [MAX] ;
        int front ;
        int rear ;
    } Queue ;


void init ( Queue* queue ) 
{
    queue->front = -1 ;
    queue->rear = -1 ;
}


int is_Empty ( Queue* queue ) {
    return ( queue->front == -1 ) ;
}


void enqueue ( Queue* queue , int value ) 
{
    if ( queue->rear == MAX - 1 ) 
        {
            printf ( " Queue is full. Cannot insert %d\n" , value ) ;
            return ;
        }
    if ( is_Empty ( queue ) )  queue->front = 0 ; 
    queue->rear ++ ;
    queue->items [queue->rear] = value ; 
}


void display_queue ( Queue* queue ) 
{
    if ( is_Empty ( queue ) ) 
        {
            printf ( "Queue is empty.\n" ) ;
            return ;
        }
    printf ( "Queue elements are :" ) ;
    for ( int i = queue->front ; i <= queue->rear ; i ++ ) 
        printf ( " %d " , queue->items [i] ) ;
}


int main () 
{
    Queue queue ;
    init ( &queue ) ;

    printf ( "\n\n* Initialize a queue! " ) ;
    printf ( "\n\n* Check the queue is empty or not ? : %s " , is_Empty ( &queue ) ? "Yes" : "No" ) ;

    printf ( "\n\n* Insert some elements into the queue : " ) ;
    enqueue ( &queue , 1 ) ;
    enqueue ( &queue , 2 ) ;
    enqueue ( &queue , 3 ) ;

    display_queue ( &queue ) ;

    printf ( "\n\n* Insert another element into the queue : " ) ;
    enqueue( &queue , 4 ) ;
    display_queue ( &queue ) ;

    printf ( "\n\n* Check the queue is empty or not? : %s " , is_Empty ( &queue ) ? "Yes" : "No" ) ;
 
    printf ( "\n\n\n" ) ;
    return 0 ;
}