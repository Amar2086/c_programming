# include <stdio.h> 
int main( ) 
{ 
int   a = 500, b, c ; 
if ( a >= 400 ) 
       b = 300 ; 
c = 200 ; 
printf ( "%d %d\n", b, c ) ; 

int   x = 10, y = 20 ; 
if ( x == y ) ; 
printf ( "%d %d\n", x, y ) ;

int   d= 3 ; 
float   e = 3.0 ; 
if ( d == e ) 
printf ( "d and e are equal\n" ) ; 
else
printf("d and e are not equal");

int i = 65 ; 
 char j='A' ; 
if ( i == j ) 
printf ( "C is WOW\n" ) ; 
 else 
printf ( "C is a headache\n" ) ; 


int   f = 3, g, z ; 
g = f = 10 ; 
z = f < 10 ; 
printf ( "f = %d g = %d z = %d\n", f, g, z ) ; 

if ( 'X' < 'x' ) 
printf ( "ascii value of X is smaller than that of x\n" ) ; 

return 0 ; 
}