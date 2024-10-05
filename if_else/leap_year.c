#include<stdio.h>

int main()
{
    int year;
    printf("Enter your year:");
    scanf("%d",&year);

    if (year%100==0)
    {
        if (year%400==0)
        {
            /* code */
            printf("%d is a leap year",year);
        }
        else
        {
            printf("%d is not a leap year",year);
        }
    }    
    else
    {
        if(year%4==0)
        {
            printf("%d is a leap year",year);
        }
        else
        {
            printf("%d is not a leap year",year);
        }
    }    

    return 0;
        
    
}

//there are some other way to figure out leap year.
// you should try the other way by yourself.