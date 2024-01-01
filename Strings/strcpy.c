#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, ";
    char destination[20]; // Ensure destination has enough space

    // Using strcpy for string copy
    strcpy(destination, source);

    // Printing the result
    printf("strcpy Result: %s\n", destination);

    return 0;
}
