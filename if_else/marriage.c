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

    if((21<boy)&&(girl>18))
    {
        if(boy>girl)
        {
            if((boy-girl)<8)
            {
                printf("Marriage is possible");
            }
                 else
               {
                  printf("Marriage is not possible\n");
               }
        }

        else
           {
             printf("The girl have to be younger than the boy");
           }
    }


    return 0;
}
