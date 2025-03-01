


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100

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


double calculate_median ( Queue* queue )  
{
    if ( is_Empty ( queue ) ) 
        {
            printf ( "\n\n* Queue is empty, cannot calculate median. " ) ;
            return 0.0 ;
        }

    int count = 0 ;
    Node* current = queue->front ;
    int elements [ MAX ] ;

    while ( current != NULL ) 
        {
            elements [count ++] = current->data ;
            current = current->next ;
        }

    for ( int i = 0 ; i < count - 1 ; i ++ ) 
        {
            for ( int j = 0 ; j < count - i - 1 ; j ++ ) 
                {
                    if ( elements [j] > elements [j + 1] ) 
                        {
                            int tmp = elements [j] ;
                            elements [j] = elements [j + 1] ;
                            elements [j + 1] = tmp ;
                        }
                }
        }

    if ( count % 2 == 1 ) 
        return ( double ) elements [count / 2] ;
    else 
        return ( elements [( count / 2 ) - 1] + elements [count / 2] ) / 2.0 ;
}


void free_queue ( Queue* queue ) 
{
    while ( !is_Empty ( queue ) )  dequeue ( queue ) ;
    free ( queue ) ;
}


int main ()
{
    Queue* queue = init () ;

    enqueue ( queue , 1 ) ;
    enqueue ( queue , 2 ) ;
    enqueue ( queue , 3 ) ;
    enqueue ( queue , 4 ) ;
    enqueue ( queue , 5 ) ;

    
    printf ( "\n\n* Queue elements are : " ) ;
    display ( queue ) ;
    double median = calculate_median ( queue ) ;
    printf ( "\n\n* The median of the elements in the queue is : %.2lf " , median ) ;



    enqueue ( queue , 6 ) ;

    printf ( "\n\n\n* Queue elements are : " ) ;
    display ( queue ) ;
    median = calculate_median ( queue ) ;
    printf ( "\n\n* The median of the elements in the queue is : %.2lf " , median ) ;
    
    printf ( "\n\n\n" ) ;
    free_queue ( queue ) ;
    return 0 ;
}







