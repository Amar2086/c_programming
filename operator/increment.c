#include<stdio.h>

int main()
{
    int a=3,b=4,c,d,f;
    c= ++a + b + a++;  //4+4+5=13
    printf("%d",c);
    d=c + a + ++b;   //13+5+5=23
    f= ++c + d++;   //14+23
    printf("%d %d %d ",c,d,f);
      

    return 0;

}
