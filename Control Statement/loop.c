#include <stdio.h>

int main() {
    // Example of a while loop
    printf("While Loop:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Example of a do-while loop
    printf("\nDo-While Loop:\n");
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while (j <= 5);
    printf("\n");

    // Example of a for loop
    printf("\nFor Loop:\n");
    for (int k = 1; k <= 5; k++) {
        printf("%d ", k);
    }
    printf("\n");

    return 0;
}
