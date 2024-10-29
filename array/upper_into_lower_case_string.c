#include<stdio.h>
#include<string.h>

void lowercase(char *src,int length)
{
    for (int i = 0; i <=length; i++)
    {
        if (*src>='A'&&*src<='Z')
        {
            *src=*src+32;
        }
        src++;
    }
    
}//We can also do it with the while loop and I just did it because all the time I was using the for loop. 
//I think I have been habituate with it
int main()
{
     char name[]="RaHim";
     int length=strlen(name);
     lowercase(name,length);
     printf("%s",name);


 return 0;
}