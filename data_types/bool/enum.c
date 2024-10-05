#include<stdio.h>


typedef enum trex
{
    false,
    true
};
int main()
{
    enum trex a,b;
    a=true;
    b=false;

   printf("%d\n %d",a,b);
   
   return 0;
}