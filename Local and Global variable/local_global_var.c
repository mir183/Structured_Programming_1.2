#include <stdio.h>

// Global variable
int globalVar = 10;

// Function using a local variable
void localVariableExample() {
    // Local variable
    int localVar = 5;

    printf("Inside function:\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    // Accessing the global variable in the main function
    printf("In main function before modification:\n");
    printf("Global variable: %d\n", globalVar);

    // Modifying the global variable
    globalVar = 20;

    printf("In main function after modification:\n");
    printf("Global variable: %d\n", globalVar);

    // Calling the function using local variable
    localVariableExample();

    // Attempting to access the local variable from the main function
    // This will result in a compilation error since the local variable is not accessible outside the function scope.
    // Uncommenting the line below will result in a compilation error:
    // printf("Local variable from main: %d\n", localVar);

    return 0;
}
