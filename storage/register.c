#include<stdio.h>

int main()
{
     int i=10;
     register int  *a=&i;
     printf("%d",*a);

 return 0;
}

//Register keyword cannot be used outside the main function
//It use the memory location. so it have to be used before the pointer