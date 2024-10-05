//gets() function reads a group of characters or strings from the keyboard by the user and these characters get stored in a character array. This function allows us to write space-separated texts or strings. This function is declared in stdio.h(header file).

#include<conio.h>
#include<stdio.h>

int  main()
{
    char name[150]; //a char type array of lengh 50 character 

    printf("Enter some text");  
    //read a line of character or a string 
    
    gets(name);
    
    printf("You have entered :%s",name);

    return 0;


}