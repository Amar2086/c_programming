#include <stdio.h>

void modifyValue(int *numPtr) {
    *numPtr = 20;  // Modifying the value at the memory address of the variable
}

int main() {
    int x = 10;
    modifyValue(&x);  // Pass the address of x to the function
    printf("x after modifyValue: %d\n", x);  // Output: 20 (modified)
    return 0;
}
