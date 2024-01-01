#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "TPGtahC htiw gnimmagorP";
    char reversed[20]; // Ensure reversed has enough space

    // Using strcpy to copy the original string
    strcpy(reversed, original);

    // Reversing the string manually
    int i, j;
    for (i = 0, j = strlen(reversed) - 1; i < j; i++, j--) {
        char temp = reversed[i];
        reversed[i] = reversed[j];
        reversed[j] = temp;
    }

    // Printing the result
    printf("strrev Result: %s\n", reversed);

    return 0;
}
