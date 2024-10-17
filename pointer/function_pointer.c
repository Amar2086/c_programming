#include<conio.h>
#include<stdio.h>
void add(int a ,int b)
{
    printf("%d",a+b);
}
void subs(int a ,int b)
{
    printf("%d",a-b);
}
void multiply(int a ,int b)
{
    printf("%d",a*b);
}

void func(int a)
{
    printf("\n%d",a);
 
}

int main()
{
     void (*func_pointer[])(int ,int)={add,subs,multiply};
     unsigned int a=20,b=30;
     unsigned int ch;
     printf("Enter your choice 0.Addition 1.Subtraction 2.Multiplication:");
     scanf("%d",&ch);
 
     if (ch>2)
     {
        return 0;
     }
     else
     {
        func_pointer[ch](a,b);
     }
     

     void  (*func_ptr)(int)=func;
     func(a);

 return 0;
}