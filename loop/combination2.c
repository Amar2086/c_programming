//we are gonna see combination of 4 digit 
#include<stdio.h>

int main()
{
    int i,j,k,first,sec,third;
    scanf("%d%d%d",&first,&sec,&third);
    for(i=0;i<=first;i++)
    {
        for(j=0;j<=sec;j++)
        {
            for (k = 0; k<= third; k++)
            {
                /* code */
                printf("%d%d%d",i,j,k);
            }
            
        }
    }

    return 0;
}