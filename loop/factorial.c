#include<stdio.h>

int main()
{
    int i,num;
    long int fact;
    printf("Enter a numeber:");
    scanf("%d",&num);
    fact=i=1;
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial value of %d is %ld",num,fact);

    return 0;

}