#include<conio.h>
#include<stdio.h>
#include<string.h> //strlen() function is in this library

int main()
{
     char str1[100]="Hello";
     char str[]="Abdullah_Al_Omar";
     char str2[100];
     printf("%s\n",str);
     scanf("%s",str2);
     printf("%s\n",str2);
     puts(str1);
     int length =0;
     length= strlen(str);

     printf("%d\n",length);
     strcat(str,str1);
     printf("\n%s",str);
     strcat(str1,str);  //When combining, look at the string size. If not enough, then it will not print
     puts(str1);

 return 0;
}