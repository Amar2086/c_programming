#include<conio.h>
#include<stdio.h>

int main()
{
     int n=5;
     int *ptr=&n;
     
     printf("%p",ptr);
     printf("\n%d\n",*ptr);
     ptr=ptr+3;
     printf("%d\n",*ptr); //garbage value
     printf("%p",ptr);

 return 0;
}