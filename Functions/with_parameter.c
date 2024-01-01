#include <stdio.h>

// Function with parameters
int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling the function with parameters
    int result = add(5, 7);
    printf("The sum is: %d\n", result);

    return 0;
}
