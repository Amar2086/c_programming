#include<conio.h>
#include<stdio.h>

void string_print(char str3[])
{
    printf("%s",str3);
}
int main()
{
     char str[50], str2[20];
     char str3[]="hello world";
     
     fgets(str,50,stdin);
     printf("The strings are \t");
     puts(str);
     getchar();
     scanf("%[^\n]s", str2);
     printf("\n\t%s\n",str2);
     
     string_print(str3);
 return 0;
}