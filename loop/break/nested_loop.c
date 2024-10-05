#include<conio.h>
#include<stdio.h>

int main()
{
    int count;
    scanf("%d",&count);
     for (int i = 0; i < count; i++)
     {
        /* code */
        for(int j=0;j<=i;j++)
        {
            if (i%2==0)
            {
                break;
            }
            else
            {
                printf("%d",j);
            }
            
        }
        printf("\n");
     }
     

 return 0;
}