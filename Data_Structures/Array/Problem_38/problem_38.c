

#include <stdio.h>

int main ()
{
    int first_arr [] = { 10 , 12 , 14 , 16 , 18 , 20 , 22 } ;   
    int second_arr [] = { 11 , 13 , 15 , 17 , 19 , 21 } ;
    int new_Arr [20] ;
    int size_2 , size_1 ; 
    
    size_1 = ( int ) ( sizeof ( first_arr ) / sizeof ( first_arr [0] ) ) ;
    size_2 = ( int ) ( sizeof ( second_arr ) / sizeof ( second_arr [0] ) ) ;

    int k = 0 ;
    for ( int i = 0 ; i < size_1 ; i ++ )
        new_Arr [k ++] = first_arr [i] ;
    for ( int i = 0 ; i < size_2 ; i ++ )
        new_Arr [k ++] = second_arr [i] ;
    
    int temp ; 
    for ( int i = 0 ; i < k - 1 ; i ++ )  
        {
            for ( int j = 0 ; j < k - i - 1 ; j ++ ) 
                { 
                    if ( new_Arr [j] > new_Arr [j + 1] ) 
                        { 
                            temp = new_Arr [j] ;
                            new_Arr [j] = new_Arr [j + 1] ;
                            new_Arr [j + 1] = temp ;  
                        }
                } 
        }

    printf ( "\n\n\t * The given Large Array is : " ) ;
    for ( int i = 0 ; i < size_1 ; i ++ )
        printf ( " %d  " , first_arr [i] ) ;
    
    printf ( "\n\n\t * The given Small Array is : " ) ;
    for ( int i = 0 ; i < size_2 ; i ++ )
        printf ( " %d  " , second_arr [i] ) ;

    printf ( "\n\n\t * After merged the new Array is : " ) ;
    for ( int i = 0 ; i < k ; i ++ )
        printf ( " %d  " , new_Arr [i] ) ;
    
    printf ( "\n\n\n" ) ;

    return 0 ;
}