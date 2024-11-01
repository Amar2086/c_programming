#include <stdio.h>
#include <string.h>

void copy_string(char *dest, char *src) {
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main() {
    char src[] = "Hello, World!";
    char dest[100];
    copy_string(dest, src);  // This may cause issues.
    printf("Copied String: %s\n", dest);
    return 0;
}
