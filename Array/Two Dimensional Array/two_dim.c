#include <stdio.h>

int main() {
    // Declaration and Initialization of a 2D Integer Array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing and Printing 2D Array Elements
    printf("2D Array Elements:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
