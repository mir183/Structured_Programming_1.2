#include <stdio.h>
#include <math.h>

// Non-void Function (Library Function)
double squareRoot(double num) {
    return sqrt(num);
}// non void  can be any data type

int main() {
    // Calling Non-void Function (Library Function)
    double num = 25.0;
    double result = squareRoot(num);
    printf("Square root of %.2lf is %.2lf\n", num, result);

    return 0;
}
