


#include <stdio.h>

#define LIMIT 100

int main ()
{
    int T [LIMIT] , size , ctr , majority_element ;

    printf ( " \n\t * Give me the size of the array : " ) ;
    scanf ( " %d" , &size ) ;

    for ( int i = 0 ; i < size ; i ++ )
        {
            printf ( "\n\t * Give me T [%d] : " , i+1 ) ;
            scanf ( " %d" , &T[i] ) ;
        }

    majority_element = __INT_MAX__ ;
    for ( int i = 0 ; i < size ; i ++ )
        {
            ctr = 0 ;
            for ( int j = 1 ; j < size ; j ++ )
                {
                    if ( T [i] == T [j] )
                        ctr ++ ;
                }
            if ( ctr > size / 2 )
                {
                    majority_element = T [i] ;
                    break ; 
                }
        }

    printf ( "\n\n\t * The given array is : " ) ;
    for ( int i = 0 ; i < size ; i ++ )
        printf ( " %d  " , T [i] ) ;

    if ( ctr > size/2 )  
        printf ( " \n\n\t * The majority element in the given array is %d " , majority_element ) ;  
    else 
        printf ( " \n\n\t * There are no Majority Elements in the given array !! " ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
} 