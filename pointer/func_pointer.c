#include<conio.h>
#include<stdio.h>

void fuck1()
{
    printf("This is fuck1\n");
}
void fuck2()
{
    printf("This is fuck2\n");
}

void fuck_all(void (*fuck)())
{
    fuck();
}
int main()
{
      fuck_all( fuck1);
      fuck_all( fuck2);

 return 0;
}