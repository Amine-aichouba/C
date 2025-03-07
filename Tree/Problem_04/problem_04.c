


#include <stdio.h>
#include <stdlib.h>


typedef struct Node 
        {
            int item ;
            struct Node* left ;
            struct Node* right ;
        } Node ;


Node* init () {
    return NULL ; 
}


Node* create_node ( int item )  
{
    Node* new_node = ( Node* ) malloc ( sizeof ( Node ) ) ;
    new_node->item = item ;
    new_node->left = NULL ;
    new_node->right = NULL ;
    return new_node ;
}


Node* insert ( Node* root , int item ) 
{
    if ( root == NULL )  return create_node ( item ) ;
    if ( item < root->item )  root->left = insert ( root->left , item ) ;
    if ( item > root->item ) root->right = insert ( root->right , item ) ;
    return root ;
}


Node* find_min ( Node* root ) 
{
    while ( root->left != NULL )  root = root->left ;
    return root ;
}


Node* remove_node ( Node* root , int item ) 
{
    if ( root == NULL )  return root ; 
    if ( item < root->item ) root->left = remove_node ( root->left , item ) ;
    if ( item > root->item ) root->right = remove_node ( root->right , item ) ;
    else
        {     
            if ( root->left == NULL ) 
                {
                    Node* tmp = root->right ;
                    free ( root ) ;
                    return tmp ;
                } 
            if ( root->right == NULL ) 
                {
                    Node* tmp = root->left ;
                    free ( root ) ;
                    return tmp ;
                }

            Node* tmp = find_min ( root->right ) ;   
            root->item = tmp->item ; 
            root->right = remove_node ( root->right , tmp->item ) ;  
        }
    return root ;
}


void in_order ( Node* root ) 
{
    if ( root != NULL ) 
        {
            in_order ( root->left ) ;
            printf ( " %d " , root->item ) ;
            in_order ( root->right ) ;
        }
}


void free_tree ( Node* root ) 
{
    if ( root != NULL ) 
        {
            free_tree ( root->left ) ;
            free_tree ( root->right ) ;
            free ( root ) ;
        }
}


int main () 
{
    Node* root = init () ;
    int item ;

    do 
        {
            printf ( "\n* Enter a value to insert into the binary tree [enter 0 to stop]: " ) ;
            scanf ( " %d" , &item ) ;
            if ( item != 0 )  root = insert ( root , item ) ;
        } while ( item != 0 ) ;

    printf ( "\n\n* In-order traversal : " ) ;
    in_order ( root ) ;
    printf ( "\n" ) ;

    do 
        {
            printf ( "\n\n* Enter a value to delete from the binary search tree [enter 0 to stop]: " ) ;
            scanf ( " %d" , &item ) ;

            if ( item != 0 ) 
                {
                    root = remove_node ( root , item ) ;
                    printf ( "\n\n* In-order Traversal after deleting %d : " , item ) ;
                    in_order ( root ) ;
                }

        } while ( item != 0 ) ;
    
    printf ( "\n\n\n" ) ; 
    
    free_tree ( root ) ;

    return 0 ;
}