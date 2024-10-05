#include<stdio.h>

int main()
{
    int i,j;
    for ( i = 1; i <= 10; i++)
    {
        for ( j = 0; j <= 20; j++)
        {
            if(i==j)
            continue;
            printf("\n%d %d\n",i,j);
        }
        
    }
    
    return 0;
}