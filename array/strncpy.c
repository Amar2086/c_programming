#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[10];
    strncpy(destination, source, 5); // Copies the first 5 characters
    destination[5] = '\0'; // Null-terminate manually
    printf("Copied String: %s\n", destination); // Output: "Hello"
    return 0;
}
