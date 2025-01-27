


#include <stdio.h>
#include <float.h> 


typedef struct 
    {
        char title [100] ;
        char author [100] ;
        float price ;
    } Book ;


int main () 
{  
    Book book1 , book2 , book3 , most_expensive , lowest_priced  ;

    printf ( "\n\n\t * Give me details for Book 1 : " ) ;
    printf ( "\n\n\t * Title : " ) ;
    scanf ( " %s" , book1.title ) ;

    printf ( "\n\t * Author : " ) ;
    scanf ( " %s" , book1.author ) ; 
    
    printf ( "\n\t * Price : " ) ;
    scanf ( " %f" , &book1.price ) ;

    printf ( "\n\n\t * Give me details for Book 2 : " ) ;
    printf ( "\n\n\t * Title : " ) ;
    scanf ( " %s" , book2.title ) ;

    printf ( "\n\t * Author : " ) ;
    scanf ( " %s" , book2.author ) ;
    
    printf ( "\n\t * Price : " ) ;
    scanf ( " %f" , &book2.price ) ;

    printf ( "\n\n\t * Give me details for Book 3 : " ) ;
    printf ( "\n\n\t * Title : " ) ;
    scanf ( " %s" , book3.title ) ;
    
    printf ( "\n\t * Author : " ) ;
    scanf ( " %s" , book3.author ) ;
    
    printf ( "\n\t * Price : " ) ;
    scanf ( "%f" , &book3.price ) ;

    if ( ( book1.price >= book2.price ) && ( book1.price >= book3.price ) ) 
        most_expensive = book1 ;
    else 
        if ( ( book2.price >= book1.price ) && ( book2.price >= book3.price ) ) 
            most_expensive = book2 ;
    else 
        most_expensive = book3 ;
    
 
    if ( ( book1.price <= book2.price ) && ( book1.price <= book3.price ) ) 
        lowest_priced = book1 ;
    else 
        if ( ( book2.price <= book1.price ) && ( book2.price <= book3.price ) ) 
        lowest_priced = book2 ;
    else 
        lowest_priced = book3 ;


    printf ( "\n\n\n\t * Most Expensive Book : " ) ;
    printf ( "\n\n\t * Title : %s " , most_expensive.title ) ;
    printf ( "\n\n\t * Author : %s " , most_expensive.author ) ;
    printf ( "\n\n\t * Price : %.2f " , most_expensive.price ) ;


    printf ( "\n\n\n\t * Lowest Priced Book : " ) ;
    printf ( "\n\n\t * Title : %s " , lowest_priced.title ) ;
    printf ( "\n\n\t * Author : %s " , lowest_priced.author ) ; 
    printf ( "\n\n\t * Price : %.2f " , lowest_priced.price ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
