#include<stdio.h>

void count ()
{
    static int x=12;
    x+=20;
    printf("%d\n",x);
}
int main()
{
   count();
   count();
   count();
}