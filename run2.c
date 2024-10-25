#include<stdio.h>

int main()
{
     int i;

    printf("Even:");
     for ( i = 1; i <=10; i++)
     {
        /* code */
        if (i%2==0)
        {
            /* code */
            printf("%d",i);
        }
        
     }
     printf("\nOdd:");
     for ( i = 0; i <10; i++)
     {
        /* code */
        if(i%2!=0)
        printf("%d",i);

     }
     
     

 return 0;
}