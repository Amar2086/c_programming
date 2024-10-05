#include<stdio.h>
int var=86;

void function()
{
    printf("%d",var);
}
int main()
{
 function();

 var=186;

 printf("\n%d", var);
 
}