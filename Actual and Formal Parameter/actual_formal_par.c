#include <stdio.h>

// Function with formal parameters
void addNumbers(int a, int b) {
    int sum = a + b;
    printf("Inside function:\n");
    printf("Formal parameters (a and b): %d and %d\n", a, b);
    printf("Sum: %d\n", sum);
}

int main() {
    int x = 5, y = 7;

    // Calling the function with actual parameters
    printf("In main function before function call:\n");
    printf("Actual parameters (x and y): %d and %d\n", x, y);

    addNumbers(x, y);

    printf("In main function after function call:\n");
    printf("Actual parameters (x and y): %d and %d\n", x, y);

    return 0;
}
