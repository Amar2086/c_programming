#include<conio.h>
#include<stdio.h>

int main()
{
     char array_string[3][10]={"Hello","omar","HelloWorld"};
     printf("The string are\n");

     for (int i = 0; i < 3; i++)
     {
        /* code */
        printf("%s\n",array_string[i]);
     }

     //modify the value of the array
     strcpy(array_string[1],"ishtiak");
     printf("\n%s",array_string[1]);
     

 return 0;
}