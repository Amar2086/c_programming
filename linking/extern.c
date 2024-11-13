#include<stdio.h>

extern int x;

int main()
{
    int a=12;

    printf("%d\n",a);
    printf("%d",x);

    return 0;
}