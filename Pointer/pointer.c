#include <stdio.h>

int main() {
    // Declaration and Initialization of Variables
    int num = 42;
    double pi = 3.14;
    
    // Declaration of Pointers
    int *intPointer;
    double *doublePointer;

    // Assigning Addresses to Pointers
    intPointer = &num;
    doublePointer = &pi;

    // Accessing and Printing Values using Pointers
    printf("Value of num: %d\n", *intPointer);
    printf("Value of pi: %.2lf\n", *doublePointer);

    // Modifying Values through Pointers
    *intPointer = 99;
    *doublePointer = 2.718;

    printf("Modified value of num: %d\n", num);
    printf("Modified value of pi: %.2lf\n", pi);

    return 0;
}
