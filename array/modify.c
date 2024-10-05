#include<conio.h>
#include<stdio.h>

int main()
{
     int number[5]={34,42,40,45,21};

     number[4]=90;
     for (int  i = 0; i < 5; i++)
     {
        printf("%d\n",number[i]);
        /* code */
     }
     

 return 0;
}