// C program to demonstrate the strtok() function
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Geeks,for.Geeks";
    // Delimiters: space, comma, dot,
    // exclamation mark
    const char delimiters[] = ",.";

    // Tokenize the string
    char* token = strtok(str, delimiters);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }

    return 0;
}
