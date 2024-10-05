#include<stdio.h>

int main()
{
    char a = 0xfb;
    unsigned char b =0xfb;

    printf("a=%c\n b=%c \n",a,b);

    if(a==b)
    {
        printf("samne");
    }
    else
    {
        printf("Not same");
    }

    return 0;
}