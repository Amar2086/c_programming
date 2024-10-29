
//Let's see how can we copy the string without the string function and also Copy it in a reverse way.
#include<stdio.h>
#include<string.h>

void copy_string(char *dest,const char *src)
{
    while (*src!='\0')
    {
        /* code */
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    
}
void reverse_copy_string( char *src,int length,char *dest)
{
    int j=0;
   for (int i = length-1; i>=0; i--)
   {
    dest[j]=src[i];
    j++;
    
   }
   dest[length]='\0';
   
}
int main()
{
     char emon[]="hulo";
     int length=strlen(emon);
     char rana[20];
     char ana[20];
     
     reverse_copy_string(emon,length,ana);
     copy_string(rana,emon);
     printf("Copied string is %s",rana);
     printf("\nThe reversed string is %s",ana);
 return 0;
}