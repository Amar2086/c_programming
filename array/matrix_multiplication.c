#include <stdio.h>

int main() {
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int C[2][2] = {0};  // Result matrix C (size 2x2)

    // Performing matrix multiplication: C = A * B
    for(int i = 0; i < 2; i++) {       // Rows of A
        for(int j = 0; j < 2; j++) {   // Columns of B
            for(int k = 0; k < 3; k++) {   // Columns of A / Rows of B
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Printing the result matrix C
    printf("Result of A * B:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
