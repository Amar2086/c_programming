#include<stdio.h>
#include<stdbool.h>

bool even(int x)
{
    if(x%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    scanf("%d",&x);

    if (even(x))
    {
        printf("%d is an even ",x);
    }
    else
    {
        printf("%d is an oddg numebr ",x);
    }

    return 0;
}