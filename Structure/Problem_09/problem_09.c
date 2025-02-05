


#include <stdio.h>


typedef struct  
        {
            int carID ;
            char model [50] ;
            float rental_rate_per_day ;
        } Car ;

float calculate_rental_cost ( Car car , int days ) 
{
    return  car.rental_rate_per_day * ( float ) days ;
}

int main () 
{
    Car car1 , car2 , car3 ;
    int rental_days ;

//------------------------------------[ Car 01 ]----------------------------------------
    
    printf ( "\n\n\t * Give me details for Car 1 : " ) ;
    printf ( "\n\n\t * Car ID : ");
    scanf ( " %d" , &car1.carID ) ;
    
    printf ( "\n\t * Model : " ) ;
    scanf ( " %s" , car1.model ) ; 
    
    printf ( "\n\t * Rental Rate per Day : " ) ;
    scanf ( " %f" , &car1.rental_rate_per_day ) ;

//------------------------------------[ Car 02 ]----------------------------------------

    printf ( "\n\n\t * Give me details for Car 2 : " ) ;
    printf ( "\n\n\t * Car ID : " ) ;
    scanf ( " %d" , &car2.carID ) ;
    
    printf ( "\n\t * Model : " ) ;
    scanf ( " %s" , car2.model ) ;
    
    printf ( "\n\t * Rental Rate per Day : " ) ;
    scanf ( " %f" , &car2.rental_rate_per_day ) ;

//------------------------------------[ Car 03 ]----------------------------------------

    printf ( "\n\n\t * Give me details for Car 3 : " ) ;
    printf ( "\n\n\t * Car ID : " ) ;
    scanf ( " %d" , &car3.carID ) ;
    
    printf ( "\n\t * Model : " ) ;
    scanf ( " %s" , car3.model ) ;
    
    printf ( "\n\t * Rental Rate per Day : " ) ; 
    scanf ( " %f" , &car3.rental_rate_per_day ) ;


    printf ( "\n\n\t * Enter the number of rental days : " ) ;
    scanf ( " %d" , &rental_days ) ;

    printf ( "\n\n\t * Total Rental Cost for Car 1 : %.2f " , calculate_rental_cost ( car1 , rental_days ) ) ;
    printf ( "\n\n\t * Total Rental Cost for Car 2 : %.2f " , calculate_rental_cost ( car2 , rental_days ) ) ;
    printf ( "\n\n\t * Total Rental Cost for Car 3 : %.2f " , calculate_rental_cost ( car3 , rental_days ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
