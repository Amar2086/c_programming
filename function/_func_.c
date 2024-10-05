#include<conio.h>
#include<stdio.h>

void fuck()
{
    printf("%s\t",__func__);
}
void off()
{
    printf("%s",__func__);
}
int main()
{
     fuck();
     off();

 return 0;
}