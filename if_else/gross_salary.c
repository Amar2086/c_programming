#include<stdio.h>

int main()
{
    float hra, gs,da ,bs;

    printf("Enter your basic salary:");
    scanf("%f",&bs);

    if (bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra = 500;
        da=bs*98/100;
    }

    gs= bs+hra+da;

    printf("Your gross salary is %f\n",gs);

    return 0;

    
}