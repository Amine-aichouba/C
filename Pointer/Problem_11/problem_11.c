


#include <stdio.h>

void swap ( int *val_1 , int *val_2 , int *val_3 )
{
    int buffer = *val_1 ;
    *val_1 = *val_3 ;
    *val_3 = *val_2 ;
    *val_2 = buffer ;
}

int main ()
{
    int val_1 , val_2 , val_3 ;

    printf ( "\n\n\t * Give me the value of 1st element : " ) ;
    scanf ( " %d" , &val_1 ) ;

    printf ( "\n\t * Give me the value of 2nd element : " ) ;
    scanf ( " %d" , &val_2 ) ;

    printf ( "\n\t * Give me the value of 3rd element : " ) ;
    scanf ( " %d" , &val_3 ) ;

    printf ( "\n\n\t * The value before swapping are : " ) ;
    printf ( "\n\n\t * Element : %d " , val_1 ) ;
    printf ( "\n\t * Element : %d " , val_2 ) ;
    printf ( "\n\t * Element : %d " , val_3 ) ;

    swap ( &val_1 , &val_2 , &val_3 ) ;

    printf ( "\n\n\t * The value after swapping are : " ) ;
    printf ( "\n\n\t * Element : %d " , val_1 ) ;
    printf ( "\n\t * Element : %d " , val_2 ) ;
    printf ( "\n\t * Element : %d " , val_3 ) ;
    printf ( "\n\n\n" ) ;
    
    return 0 ;
}