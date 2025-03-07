


#include <stdio.h>
#include <stdlib.h>


typedef struct Node 
        {
            int item ;
            struct Node* left ;
            struct Node* right ;
        } Node ;



Node* create_node ( int item ) 
{
    Node* new_node = ( Node* ) malloc ( sizeof ( Node) ) ;
    if ( new_node != NULL ) 
        {
            new_node->item = item ;
            new_node->left = NULL ;
            new_node->right = NULL ;
        }
    return new_node ;
}


Node* insert ( Node* root , int item ) 
{
    if ( root == NULL )  return create_node ( item ) ;
    if ( item < root->item ) root->left = insert ( root->left , item ) ;
    if ( item > root->item ) root->right = insert ( root->right , item ) ;
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


Node* mirror_tree ( Node* root ) 
{
    if ( root == NULL ) return NULL ;

    Node* mirrored_node = create_node ( root->item ) ;
    if ( mirrored_node != NULL ) 
        {
            mirrored_node->left = mirror_tree ( root->right ) ;
            mirrored_node->right = mirror_tree ( root->left ) ;
        }
    return mirrored_node ;
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
    Node* root = NULL ;
    Node* mirrored_root = NULL ;
    int item ;

    do 
        {
            printf ( "\n* Enter a item to insert into the binary tree [enter 0 to stop]: " ) ;
            scanf ( " %d" , &item ) ;

            if ( item != 0 )  root = insert ( root , item ) ;

        } while ( item != 0 ) ;


    printf ( "\n\n* Original Binary Tree (In-order Traversal): " ) ;
    in_order ( root ) ;

    mirrored_root = mirror_tree ( root ) ;
    printf ( "\n\n* Mirrored Binary Tree (In-order Traversal): " ) ;
    in_order ( mirrored_root ) ;

    printf ( "\n\n\n" ) ;
    free_tree ( mirrored_root ) ;
    free_tree ( root ) ;
    

    return 0 ;
}
