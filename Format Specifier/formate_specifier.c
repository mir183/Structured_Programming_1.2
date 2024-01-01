#include <stdio.h>

int main() {
    // %d - Integer
    int numInt = 42;
    printf("Integer: %d\n", numInt);

    // %f - Floating-point number
    float numFloat = 3.14;
    printf("Float: %f\n", numFloat);

    // %c - Character
    char ch = 'A';
    printf("Character: %c\n", ch);

    // %s - String
    char str[] = "Hello, World!";
    printf("String: %s\n", str);

    // %lf - Double precision floating-point number
    double numDouble = 3.141592653589793;
    printf("Double: %lf\n", numDouble);

    // %u - Unsigned integer
    unsigned int numUnsigned = 42;
    printf("Unsigned Integer: %u\n", numUnsigned);

    // %p - Pointer
    int numPointer = 42;
    int *ptr = &numPointer;
    printf("Pointer Address: %p\n", (void *)ptr);

    // %x or %X - Hexadecimal number
    int numHex = 255;
    printf("Hexadecimal: %x\n", numHex);

    // %o - Octal number
    int numOctal = 63;
    printf("Octal: %o\n", numOctal);

    return 0;
}
