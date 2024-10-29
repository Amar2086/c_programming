#include<stdio.h>
#include<string.h>

int vowel_number(char *name,int length)
{
    int j=0;
    for (int i = 0; i <= length; i++)
    {
        
        if (name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
        name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            /* code */
            ++j;
        }
    }
      return j; 
}
int main()
{
     char name[100];
     scanf("%s",&name);
     int lemgth=strlen(name);
     int number =vowel_number(name,lemgth);
     printf("The number of the vowel in the word is %d",number);


 return 0;
}