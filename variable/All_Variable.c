#include <stdio.h>

// Global variable
int globalVar = 100;

// Function with different storage classes
void demonstrateStorageClasses() {
    // Local automatic variable
    auto int localVar = 10;

    // Local register variable
    register int regVar = 20;

    // Local static variable
    static int staticVar = 30;

    // Printing variables
    printf("Local auto variable: %d\n", localVar);
    printf("Local register variable: %d\n", regVar);
    printf("Local static variable: %d\n", staticVar);
    printf("Global variable: %d\n", globalVar);

    // Modifying variables
    localVar++;
    regVar++;
    staticVar++;
    globalVar++;
}

int main() {
    // Calling function multiple times to see static variable behavior
    demonstrateStorageClasses();
    demonstrateStorageClasses();
    demonstrateStorageClasses();

    return 0;
}
