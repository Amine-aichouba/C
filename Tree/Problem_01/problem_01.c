


#include <stdio.h>
#include <stdlib.h>


typedef struct Node
        {
            int item ;
            struct Node* left ;
            struct Node* right ;
        } Node ;


Node* init () {
    return  NULL ;
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
    if ( item > root->item )  root->right = insert ( root->right , item ) ;
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
    char choice ;
    int item ;
    do 
        {
            printf ( "\n\n* Enter a value to insert into the binary tree : " ) ;
            scanf ( " %d" , &item ) ;

            root = insert ( root , item ) ; 

            printf ( "\n* Want to insert another node? [Y/n]: " ) ;
            scanf ( " %c" , &choice ) ;

        }   while ( choice == 'y' || choice == 'Y' ) ;

    printf ( "\n\n* In-order traversal : " ) ;
    in_order ( root ) ;

    printf ( "\n\n\n" ) ;
    free_tree ( root ) ;

    return 0 ;
}