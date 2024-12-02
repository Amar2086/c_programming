#include<stdio.h>

extern int x;

int main()
{
    int a=12;

    printf("%d\n",a);
    printf("%d",x);

    return 0;
}
// gcc extern.c extern_shared_01.c -o extern_program
//The command to run it
//the extern_shared_01.c must be present in the same group