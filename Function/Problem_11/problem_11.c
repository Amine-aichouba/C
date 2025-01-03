


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void sort ( char str [] )
{
    for ( int i = 0 ; i < ( int ) strlen ( str ) - 1 ; i ++ ) 
        { 
            for ( int j = i + 1 ; j < ( int ) strlen ( str ) ; j ++ ) 
                { 
                    if ( str [i] > str [j] ) 
                        { 
                            char temp = str [i] ; 
                            str [i] = str [j] ; 
                            str [j] = temp ; 
                        } 
                } 
        } 
}


bool are_anagrams ( char str1 [] , char str2 [] )
{
    if ( strlen ( str1 ) != strlen ( str2 ) )  return false ; 
     
    sort ( str1 ) ; 
    sort ( str2 ) ; 
    return  strcmp ( str1 , str2 ) == 0  ;
}

int main () 
{
    char str1 [100] , str2 [100] ;

    printf ( "\n\n\t * Give me the first string : " ) ;
    fgets ( str1 , sizeof ( str1 ) , stdin ) ;
    str1 [ strcspn ( str1 , "\n" ) ] = '\0' ; 

    printf ( "\n\n\t * Give me the second string : " ) ;
    fgets ( str2 , sizeof ( str2 ) , stdin ) ;
    str2 [ strcspn ( str2 , "\n" ) ] = '\0' ;  

    if ( are_anagrams ( str1 , str2 ) ) 
        printf ( "\n\n\t < %s > and < %s > are Anagram " , str1 , str2 ) ;
    else 
        printf ( "\n\n\t < %s > and < %s > are not Anagram " , str1 , str2 ) ;
    printf ( "\n\n\n" ) ;

    return 0 ;
}
