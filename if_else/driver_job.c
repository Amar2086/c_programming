#include<stdio.h>

int main()
{
    int age,sex,ms;
    printf("Enter your age:");
    scanf("%d",&age);
    getchar();

    printf("If your sex is male ,Enter 1.\n If female, Enter 2\n");
    scanf("%d",&sex);
    getchar();

    printf("If you are married prees 1, otherwsie press 2\n");
    scanf("%d",&ms);

    if ((ms==1)||(ms==2&&sex==1&&age>30)||(ms==2&&sex==2&&age>25))
       printf("Driver should be insured");
    else
    printf("Driver should not be insured");   

    return 0;

}