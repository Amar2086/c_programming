#include<stdio.h>

int main()
{
     int i=10;
      register int  *a=&i;
     printf("%d",*a);

 return 0;
}