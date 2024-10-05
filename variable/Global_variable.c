#include<stdio.h>

int x=86;
// we can also try another way
int a,b,c;

void sum()
{
    printf("\n%d",c);
}

void function_1()
{
    printf("%d\n",x);
}

void function_2()
{
    printf("%d",x);
}

int main()
{
    a=45,b=70,c= a+b;
    function_1();
    function_2();

    sum();

}