#include <stdio.h>

// Function with call by reference
void incrementByReference(int *num) {
    (*num)++;  // Increment the value pointed to by num
    printf("Inside function (Call by Reference): %d\n", *num);
}

int main() {
    int num = 5;

    // Calling the function with call by reference
    incrementByReference(&num);

    // Original value is modified in the main function
    printf("In main function (Call by Reference): %d\n", num);

    return 0;
}
