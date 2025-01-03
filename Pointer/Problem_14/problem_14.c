


#include <stdio.h>

void arr_sort ( int arr [] , int arr_size ) 
{ 
    for ( int i = 0 ; i < arr_size - 1 ; i ++ ) 
        { 
            for ( int j = 0 ; j < arr_size - i - 1 ; j ++ ) 
                { 
                    if ( *(arr + j) > *(arr + j + 1) ) 
                        { 
                            int buffer = *(arr + j) ; 
                            *(arr + j) = *(arr + j + 1) ; 
                            *(arr + j + 1) = buffer ; 
                        } 
                } 
        } 
}   

int main ()
{
    int arr [40] , arr_size ;

    printf ( "\n\n\t * Give me the size of the first array : " ) ;
    scanf ( " %d" , &arr_size ) ;
   
    for ( int i = 0 ; i < arr_size ; i ++ )
        {
            printf ( "\n\t * Element %d : " , i+1 ) ;
            scanf ( " %d" , (arr + i) ) ;
        }

    arr_sort ( arr , arr_size ) ;
    
    printf ( "\n\n\t * The elements in the array after sorting : \n" ) ;
    for ( int i = 0 ; i < arr_size ; i ++ ) 
        printf ( "\n\n\t * Element %d : %d " , i+1 , *(arr + i) ) ;

    printf ( "\n\n\n" ) ;

    return 0 ;
}