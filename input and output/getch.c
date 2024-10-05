// C program to implement 
// getch() function 
#include <conio.h> 
#include <stdio.h> 

// Driver code 
int main() 
{ 
	printf("Enter any character: "); 

	// Reads a character but 
	// not displays 
	getch(); 

	return 0; 
}


// getch() function reads a single character from the keyboard by the user but doesn’t display that character on the console screen and immediately returned without pressing enter key. 
//This function is declared in conio.h(header file). getch() is also used for hold the screen.