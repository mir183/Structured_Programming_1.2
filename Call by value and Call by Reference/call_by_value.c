#include <stdio.h>

// Function with call by value
void square(int num) {
    num = num * num;
    printf("Inside function (Call by Value): %d\n", num);
}

int main() {
    int num = 5;

    // Calling the function with call by value
    square(num);

    // Original value remains unchanged in the main function
    printf("In main function (Call by Value): %d\n", num);

    return 0;
}
