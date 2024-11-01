#include<stdio.h>

int main(int argc,char *argv[])
{
     if (argc>1)
     {
        printf("Hello %s  ",argv[1]);
     }
     else
     {
        printf("hello World");
     }
     

 return 0;
}
/*
Usage: ./greeting_program Alice
Output: Hello, Alice!
If no name is given, it defaults to "Hello, World!"
*/