// putch() function is used to display a single character which is given by the user and that character prints at the current cursor location. This function is declared in conio.h(header file)

#include<conio.h>
#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any character :");

    ch=getch();

    printf("You have entered ");

    putch(ch);

    return 0;
    
}