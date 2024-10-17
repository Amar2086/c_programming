#include<conio.h>
#include<stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
   
}

int main()
{
     int x=10,y=20;
     printf("Before Swapping\n");
     printf("x=%d\ny=%d\n",x,y);
     swap(&x, &y);
      printf("After Swapping\n");
    printf("x=%d\ny=%d\n",x,y);

 return 0;
}