#include <stdio.h>

int main() {
    // Declaration and Initialization of an Integer Array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing and Printing Array Elements
    printf("Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    // Modifying Array Elements
    numbers[2] = 10;
    printf("Modified Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    // Summing Array Elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of Array Elements: %d\n", sum);

    return 0;
}
