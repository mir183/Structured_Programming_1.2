#include <stdio.h>

// Non-void Function (User-defined Function)
int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling Non-void Function (User-defined Function)
    int sum = add(5, 7);
    printf("Sum of 5 and 7 is: %d\n", sum);

    return 0;
}
