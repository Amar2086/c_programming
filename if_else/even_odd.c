#include<stdio.h>

int main()
{
    int a;
    printf("Enter your number :\n");
    scanf("%d",&a);

    if (a%2==0)
    {
        /* code */
        printf("%d is an even number ",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }

    return 0;
    
}