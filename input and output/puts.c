//In C programming puts() function is used to display a group of characters or strings which is already stored in a character array. This function is declared in stdio.h(header file).

#include<stdio.h>
int main()
{
    printf("Enter any character :");

    char name[51];

    gets(name);
 
    printf("You have entered ");

    puts(name);  //display the string

    return 0;
}