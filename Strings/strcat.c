#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "world!";

    // Using strcat for string concatenation
    strcat(str1, str2);

    // Printing the result
    printf("strcat Result: %s\n", str1);

    return 0;
}
