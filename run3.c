#include <stdio.h>

int main() {

    int N = 5;

    // An array
    int arr[] = { 1, 2, 3, 4, 5 };

    // Declare pointer variable
    int* ptr;

    // Point the pointer to the first element in array arr[]
    ptr = &arr;

    // Traverse array using ptr
    for (int i = 0; i < N; i++) {

        // Print element at which ptr points
        printf("%d ", (*ptr));

        // Move pointer to the next element
       * ptr++;
    }

    return 0;
}
