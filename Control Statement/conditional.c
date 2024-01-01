#include <stdio.h>

int main() {
    // Example of an if statement
    int x = 10;
    if (x > 5) {
        printf("If Statement: x is greater than 5.\n");
    }

    // Example of a switch statement
    switch (x) {
        case 5:
            printf("Switch Statement: x is 5.\n");
            break;
        case 10:
            printf("Switch Statement: x is 10.\n");
            break;
        default:
            printf("Switch Statement: x is neither 5 nor 10.\n");
    }

    return 0;
}
