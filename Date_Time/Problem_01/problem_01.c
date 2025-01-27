

#include <stdio.h>
#include <time.h>


int main ()
{
    time_t cur_time = time (0) ;
    struct tm* local_time = localtime ( &cur_time ) ;

    printf ( "\n\n\t * The Current date and time is : %s " , asctime ( local_time ) ) ;
    printf ( "\n\n\n" ) ; 
    return 0 ;
}