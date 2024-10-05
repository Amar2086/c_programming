#include<stdio.h>

int main()
{
    char name[500];


    printf("please enter your name:\n");
    printf("plaese enter the name your school:\n");
    scanf("%s ",&name);
     printf("%s\n",&name);


    scanf("%[^\n]s",&name);


        printf("%s",name);

    return 0;
}
