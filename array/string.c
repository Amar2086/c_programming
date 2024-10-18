#include<conio.h>
#include<stdio.h>
#include<string.h> //strlen() function is in this library

int main()
{
     char str[]="Abdullah_Al_Omar";
     char str2[100];
     printf("%s\n",str);
     scanf("%s",str2);
     printf("%s\n",str2);
     int length =0;
     length= strlen(str);

     printf("%d\n",length);

 return 0;
}