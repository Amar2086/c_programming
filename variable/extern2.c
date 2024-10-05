#include <stdio.h>

// Declaration of the external variable
extern int externalVar;

void functionInFile2() {
    printf("Value of externalVar in file2: %d\n", externalVar);
    
}
