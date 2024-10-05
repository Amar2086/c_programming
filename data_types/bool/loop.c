#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool a=true;
    int i=10;

    while (a)
    {
        /* while only work when condition is true. here, the value of a 
        is true. the condition is also true.*/

        printf("%d\n",i);
        i=i+3;

        if(i>100)
        {
            a =false; /* when the value i will be more than 100, the value of a will be false as the condition will be. 
            then condition will not work*/
        }

    }
    
    return 0;
}