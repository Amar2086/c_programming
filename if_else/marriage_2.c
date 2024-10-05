#include<stdio.h>

int main()
{
    int boy, girl;
    printf("Enter age of the boy:");
    scanf("%d",&boy);
    getchar();

    printf("\n Enter age of the girl:\n");
    scanf("%d",&girl);

    printf("Please Wait\n");
    if(boy>21&&girl>18&&(boy-girl)<8)
    {
        printf("Marriage is  possible");
    }
    else{
        printf("marriage is not possible");
    }

    return 0;

}