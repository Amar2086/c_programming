#include<conio.h>
#include<stdio.h>

int main()
{
    int count;
     scanf("%d",&count);
     for(int i=0;i<=count;i++)
     {
        for(int j=0;j<=i;j++)
        {
            if(i<101)
            {
                printf("%d",j);
            }
            else
            {
                break;
            }
        }
        printf("\n");
     }

 return 0;
}