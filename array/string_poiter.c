#include<conio.h>
#include<stdio.h>

int main()
{
     char str[20]="Abdullah_Al_Omar";
     char  *ptr=str;

     while (*ptr!='\0')
     {
        /* code */
        printf("%c",*ptr);

        ptr++;
     }
     printf("\n");
     char *arr[]={"Hello","omar","Hello World"};

     printf("The elements in the string are:\n");

     for (int  i = 0; i < 3; i++)
     {
      /* code */
      printf("%s\n",arr[i]);
     }
          
 return 0;
}