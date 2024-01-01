#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;

    // Calling the recursive function to calculate factorial
    int result = factorial(num);

    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}
