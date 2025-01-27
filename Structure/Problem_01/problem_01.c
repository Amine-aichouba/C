


#include <stdio.h>

typedef struct 
    {
        char name [20] ;
        int age ;
        float total_marks ;
    } Student ;
  

int main ()
{
    Student student_1 , student_2 ;

    printf ( "\n\n\t -----------------------------[ student 01 ]------------------------------------- " ) ;
    printf ( "\n\n\t * Name : " ) ;
    scanf ( " %s" , student_1.name ) ;

    printf ( "\n\t * Age : " ) ;
    scanf ( " %d" , &student_1.age ) ;
    
    printf ( "\n\t * Total marks : " ) ;
    scanf ( " %f" , &student_1.total_marks ) ; 


    printf ( "\n\n\t -----------------------------[ student 02 ]------------------------------------- " ) ;
    printf ( "\n\n\t * Name : " ) ;
    scanf ( "%s" , student_2.name ) ;

    printf ( "\n\t * Age : " ) ;
    scanf ( " %d" , &student_2.age ) ;
    
    printf ( "\n\t * Total marks : " ) ;
    scanf ( " %f" , &student_2.total_marks ) ; 


    printf ( "\n\n\t --------------------[ Student 1 Information ]-----------------" ) ;
    printf ( "\n\n\t * Name : %s " , student_1.name ) ;
    printf ( "\n\n\t * Age : %d " , student_1.age ) ;
    printf ( "\n\n\t * Total marks : %.2f " , student_1.total_marks ) ;


    printf ( " \n\n\t -------------------[ Student 2 Information ]-----------------" ) ;
    printf ( "\n\n\t * Name : %s " , student_2.name ) ;
    printf ( "\n\n\t * Age : %d " , student_2.age ) ;
    printf ( "\n\n\t * Total marks : %.2f " , student_2.total_marks ) ;

    float average_marks = ( student_1.total_marks + student_2.total_marks ) / 2 ;
    printf ( "\n\n\n\t * Average Total Marks : %.2f " , average_marks ) ;
    printf ( "\n\n\n" ) ;
    return 0 ;
}