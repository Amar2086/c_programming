#include <stdio.h>

int stringlength(char *src) {
    int i =0;
    while (*src != '\0') {
        src++;
        i++;
    }
     return i;// Null-terminate the destination string
}

int main() {
    char source[] = "Copy this!";
    
    int length=stringlength(source);
    printf("The length of the  String: %d\n", length);
    
    return 0;
}
