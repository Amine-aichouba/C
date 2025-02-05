


#include <stdio.h>


typedef struct  
    {
        double radius ;
    } Circle ;

double calculate_area ( Circle c ) 
{
    return 3.14159 * c.radius * c.radius ; 
}

double calculate_perimeter ( Circle c ) 
{
    return 2 * 3.14159 * c.radius ; 
}

int main () 
{
    Circle circle1 , circle2 ;

    printf ( "\n\n\t * Give me details for Circle 1 : " ) ;
    printf ( "\n\n\t * Radius : " ) ;
    scanf ( " %lf" , &circle1.radius ) ;

    printf ( "\n\n\t * Give me details for Circle 2 : " ) ;
    printf ( "\n\n\t * Radius : " ) ;
    scanf ( " %lf" , &circle2.radius ) ;

    printf ( "\n\n\n\t * Circle 1 : " ) ;
    printf ( "\n\n\t * Area : %.2lf " , calculate_area ( circle1 ) ) ;
    printf ( "\n\n\t * Perimeter : %.2lf " , calculate_perimeter ( circle1 ) ) ;

    printf ( "\n\n\n\t * Circle 2 : " ) ;
    printf ( "\n\n\t * Area : %.2lf " , calculate_area ( circle2 ) ) ;
    printf ( "\n\n\t * Perimeter : %.2lf " , calculate_perimeter ( circle2 ) ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}
