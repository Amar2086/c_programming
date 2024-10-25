#include<stdio.h>
#pragma pack(1)

typedef struct untity
{
    double i;
    char c;
    int j;
}wow;

int main()
{
     printf("%d",sizeof(wow));

 return 0;
}