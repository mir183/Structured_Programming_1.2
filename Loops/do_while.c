#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example of a do-while loop
    printf("Do-While Loop:\n");
    int k = 1; // Initialization
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);// Condition
    printf("\n");

    return 0;
}