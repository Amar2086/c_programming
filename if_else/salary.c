#include<stdio.h>

int main()
{
    int ql,exp,sex;
    printf("If you are post-graduate,Enter 1\n Enter 2 if you are under-graduated\n");
    scanf("%d",&ql);
    getchar();

    printf("\nEnter the years of your service:");
    scanf("%d",&exp);
    getchar();

    printf("If you are male press 1\n If you are female press 2\n");
    scanf("%d",&sex);

    if (sex==1)
    {
        if (exp>=10&&ql==1)
        {
            printf("salary is 12000");
        }
        else if (exp>=10&&ql==2)
        {
            printf("Salary is 10000");
        }
        else if (exp<10&&ql==1)
        {
            printf("Salary is 10000");
        }
        else if (exp<10&&ql==2)
        {
            printf("Salary is 7000");
        }
        else
        {
            printf("Give the right input");
        }
    }
    else if (sex==2)
    {
        if (exp>=10&&ql==1)
        {
            printf("salary is 11000");
        }
        else if (exp>=10&&ql==2)
        {
            printf("salary is 9000");
        }
        else if (exp<10&&ql==1)
        {
            printf("salary is 10000");
        }
        else if (exp<10&&ql==2)
        {
            printf("salary is 6000");
        }
        else
        {
            printf("Give the right input");
        }
     }
    else
    {
        printf("Give the right input");
    }

    return 0;
}