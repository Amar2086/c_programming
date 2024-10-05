#include<stdio.h>

int main()
{
    int s1,s2,s3,ls,sum;
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1>s2)
    {
        if(s1>s3)
        {
            sum=s2+s3;
            ls=s1;    
        }
        else
        {
            ls=s3;
            sum=s1+s2;
        }
    }
    else
    {
        if(s2>s3)
        {
            ls=s2;
            sum=s1+s3;
        }
        else
        {
            ls=s3;
            sum=s1+s2;
        }
    }

    if(sum>ls)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }

    return 0;
}
