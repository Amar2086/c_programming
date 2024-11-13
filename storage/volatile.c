#include<stdio.h>
#define Memory_address 0x1000U
int main()
{
    int x=0;
    volatile int *ptr=(int *) Memory_address;

    while (1)
    {
      /* code */
      x=*ptr;
      printf("%d",x);
      if(x)
      break;
    }
    

 return 0;
}