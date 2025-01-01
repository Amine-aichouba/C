

#include <stdio.h>
#include <string.h>


void change_position ( char* ch1 , char* ch2 )
{
    char tmp = *ch1 ;
    *ch1 = *ch2 ;
    *ch2 = tmp ;
}

void char_permu ( char* cht , int stno , int endno )
{
    int i ;
    if ( stno == endno )  printf ( "\n\n\t %s" , cht ) ;
    else
        {
            for ( i = stno ; i <= endno ; i ++ )
                {
                    change_position ( ( cht + stno ) , ( cht + i ) ) ; 
                    char_permu ( cht , stno + 1 , endno ) ; 
                    change_position ( ( cht + stno ) , ( cht + i ) ) ;
                }
        }
}

int main ()
{
    char str [] = "abcd" ; 
    int str_size = ( int ) strlen ( str ) ;

    printf ( "\n\n\t * Pointer : Generate permutations of a given string :" ) ;
    printf ( "\n\n\t ___________________________________________________" ) ;
    printf ( "\n\n\t * The permutations of the string are : " ) ;
    char_permu ( str , 0 , str_size - 1 ) ; 
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}
