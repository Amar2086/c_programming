//The getchar() function is used to read only a first single character from the keyboard whether multiple characters is typed by the user and this function reads one character at one time until and unless the enter key is pressed. 
//This function is declared in stdio.h(header file)


// C program to implement 
// the getchar() function 
#include <conio.h> 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	// Declaring a char type variable 
	char ch; 

	printf("Enter the character: "); 

	// Taking a character from keyboard 
	ch = getchar(); 

	// Displays the value of ch 
	printf("%c", ch); 
	return 0; 
}
