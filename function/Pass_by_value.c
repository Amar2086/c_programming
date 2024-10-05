#include<conio.h>
#include<stdio.h>

void add()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n%d\n%d\n%d",x+y,x-y,x*y,x/y);
}
int main()
{
     add();

 return 0;
}