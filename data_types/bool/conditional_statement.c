#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    if(a>b)
    {
        printf(" %d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }

    printf("\n %d is the result of the comparision",a>b);
    
    return 0;
} 