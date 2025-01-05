


#include <stdio.h>
#include <stdbool.h>



int main () 
{
    int user_input ;          
    int previous_numbers [100] ; 
    int has_duplicate = false ;   
    int index = 0 ;         

    printf ( "\n\n\t * Give me numbers ( stop if you input a duplicate ) : \n" ) ;

    while ( !has_duplicate ) 
        {
            printf ( "\n\t * Give me a number : " ) ;
            int read_status = scanf ( " %d" , &user_input ) ;

            if ( read_status != 1 ) 
                {
                    printf ( "\n\n\t * Invalid input. Please enter a valid integer. " ) ;

                    while ( getchar () != '\n' )  continue ;
                } 


            for ( int i = 0 ; i < index ; i ++ ) 
                {
                    if ( user_input == previous_numbers [i] ) 
                        {
                            has_duplicate = true ; 
                            printf ( "\n\n\t * Duplicate number entered. Program will stop " ) ;
                            break ;
                        }
                }

            previous_numbers [index ++] = user_input ; 
        }
        
    printf ( "\n\n\n" ) ;
    return 0 ;  
}
