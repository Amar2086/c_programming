#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Find the needle in the haystack.";
    char *substr = strstr(str, "needle"); // Finds "needle" in str
    if (substr != NULL) {
        printf("Substring found at: %s\n", substr); // Output: "needle in the haystack."
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
