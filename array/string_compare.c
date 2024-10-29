#include <stdio.h>

int stringCompare(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[] = "apple";
    char str2[] = "apple";

    if (stringCompare(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
