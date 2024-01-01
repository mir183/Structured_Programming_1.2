#include <stdio.h>

// Recursive Function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Calling Recursive Function
    int n = 5;
    int fact = factorial(n);
    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}
