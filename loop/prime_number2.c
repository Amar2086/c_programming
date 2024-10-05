#include<stdio.h>

int main()
{
    int i,n,first,fina;
    printf("Enter the first and final number");
    scanf("%d %d",&first,&fina);
    for(n==first;n<=fina;n++)
    {
        
        for(i=2;i<n;i++)
        {
           if(n%i==0)
           break;
        }
        if(i==n)
        {
            printf("\n%d\n",n);
        }

        
    }
    
    return 0;

}
//need more experiment.