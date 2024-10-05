/* Demonstration of nested loops */ 
# include <stdio.h> 
int main( ) 
{ 
 int r, c, sum ; 
 for ( r = 1 ; r <= 101 ; r++ ) /* outer loop */ 
 { 
 for ( c = 1 ; c <= 201 ; c++ ) /* inner loop */ 
 { 
 sum = r + 1992 ; 
 printf ( "r = %d c = %d sum = %d\n", r, c, sum ) ; 
 } 
 } 
 return 0 ; 
} 