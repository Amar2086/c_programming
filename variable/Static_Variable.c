#include<stdio.h>

void function()
{
    int x=30;
    static int y=40;
    static int z=5;


    x=x+20;
    y=y+20;
    z++;

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d",z);
}
int main()
{
    printf("First Time:");
    function();

    printf("\n Second call:");
    function();

    printf("\n Third call:");
    function();
}
