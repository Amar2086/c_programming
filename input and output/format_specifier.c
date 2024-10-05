#include<stdio.h>

int main()
{
    char c, a[50],b[50];
    printf("Enter a character:");
    scanf("%c",&c);
    printf("\nThe character is %c ",c);

    getchar();

    printf("\nEnter your name:");

    scanf("%s",&a);
    printf("\nYour name is %s ",a);

    getchar();

    printf("\nEnter your full name:");
    scanf("%[^\n]s",&b);
    printf("\nYour full name is %s",b);


    return 0;


}
