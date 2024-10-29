#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *firstO = strchr(str, 'o');  // Finds first 'o'
    char *lastO = strrchr(str, 'o');  // Finds last 'o'
    printf("First 'o' found at: %s\n", firstO); // Output: "o, World!"
    printf("Last 'o' found at: %s\n", lastO);  // Output: "orld!"
    return 0;
}
