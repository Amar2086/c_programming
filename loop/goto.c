#include<conio.h>
#include<stdio.h>

void even_odd(int num)
{
    if(num%2==0)
       goto even;
    else
       goto odd;

       even:
       printf("The number is even");
       return;

       odd:
       printf("The number is odd ");
       
}

int main()
{
    int num;
    scanf("%d",&num);
    even_odd(num);



 return 0;
}