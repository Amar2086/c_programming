#include<stdio.h>

 int cse_97(int n,int sum)
     {
        int b=0,c=0;
        if (n==0)
        return 0;
        b=n%10;
        c=n/10;
        sum=sum+b;
        cse_97(c,sum);
        printf("%d\n",sum);
     }

int main()
{
    int z=4041,sum=0;
    cse_97(z,sum);

return 0;
}