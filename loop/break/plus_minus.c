#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c;
    float x,y;

    while (1)
    {
        printf("Enter any operator(+,-,*,/)\n");
        printf("If you want to exit ,press x");
        scanf("%c",&c);

        if(c=='x')
        exit(0);

        printf("Enter two number");
        scanf("%f %f",&x,&y);

        switch (c)
        {
        case '+':
            /* code */
            printf("%.2f+%.2f=%.2f",x,y,x+y);
            break;

        case '-':
            printf("%.2f+%.2f=%.2f",x,y,x-y);
            break;

        case '*':
            printf("%.2f+%.2f=%.2f",x,y,x*y);
            break;

        case '/':
            printf("%.2f+%.2f=%.2f",x,y,x/y);
            break;

        default:
           printf("You have given wrong input");
            break;
        }
    }
    
     

 return 0;
}