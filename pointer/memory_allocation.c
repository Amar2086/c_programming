// C Program to use NULL pointer to check for melloc error
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // declaring dynamic memory for ptr
    int* ptr = (int*)malloc(5 * sizeof(int));

    // checking if the memory allocation is successful
    if (!ptr) {
        printf("Memory Allocation Failed");
        exit(0);
    }

    return 0;
}
//need to check it to understand more about it
//not running
//crashing