


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>



int main () 
{
    srand ( ( unsigned int ) time ( NULL ) ) ;
    
    int target_number = rand () % 20 + 1 ;  
    int user_guess ;  
    int attempts = 0 ;  

    printf ( "\n\n\t * Guess the number between 1 and 20 : \n " ) ;


    while ( true ) 
        {
            printf ( "\n\t * Input your guess : " ) ;
            scanf ( " %d" , &user_guess ) ;

            attempts ++ ; 

            if ( user_guess == target_number ) 
                {
                    printf ( "\n\n\t * Congratulations! You guessed the correct number in %d attempts " , attempts ) ;
                    break ;  
                } 
                else 
                    printf ( "\n\n\t * Incorrect guess. Try again! \n" ) ;
        }

    printf ( "\n\n\n" ) ;
    return 0 ; 
}
