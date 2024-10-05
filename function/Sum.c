#include<conio.h>
#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
     int add=sum(x,y);
    
    printf("The Sum is %d",add);

 return 0;
}