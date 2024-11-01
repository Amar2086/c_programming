#include<stdio.h>
#include<string.h>

void concatenation_1(char *dest,char *src)
{
    while (*dest!='\0')
    {
        dest++;
    }
    *dest=' ';//Add a space between word while joing them.
    dest++;//after assign space move to the next of pointer address to copy new address
    while (*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
void concatenation_2(char *dest, int length1,int length2,char *src1,char *src2)
{
   for (int i = 0; i < length1; i++)
   {
    dest[i]=src1[i];
   }
   for (int i = 0; i < length2; i++)
   {
    dest[length1+i]=src2[i];
   }
   
}
int main()
{
     char destination_1[50]="Hello";//increase the buffer size
     char source_1[]="world";
     char source_3[]="High";
     char source_2[]="Table";
     int length_1=strlen(source_3);
     int length_2=strlen(source_2);
     char destination_2[50];
     concatenation_1(destination_1,source_1);
     concatenation_2(destination_2,length_1,length_2,source_3,source_2);
     printf("%s\n",destination_2);
     printf("%s",destination_1);

 return 0;
}