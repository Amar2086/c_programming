#include<conio.h>
#include<stdio.h>
#include<stdarg.h>

int sum(int count,...)
{
    va_list num;
    int sum=0;
    va_start(num,count);

    for (int  i = 0; i < count; i++)
    {
        /* code */
        sum+=va_arg(num,int);
    }

    va_end(num);
    return sum;
    
}
int main()
{
     printf("%d",sum(5,4,5,6,7,7));

 return 0;
}