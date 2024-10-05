#include<conio.h>
#include<stdio.h>

void new(int a,int b)
{
    a+=b;

    printf("The value of the a and b is %d, %d",a,b);
}

int main()
{
     int x,y;
     scanf("%d%d",&x,&y);
     
     new(x,y);
     printf("\nthe value of x and y is %d , %d",x,y);

 return 0;
}