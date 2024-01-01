#include <stdio.h>

int main() {
    // \a: Alert
    printf("This is an alert: \a\n");

    // \b: Backspace
    printf("Backspace\b: Move one character to the left.\n");

    // \f: Form feed
    printf("Form feed\f: Clear the screen and move to the top left corner.\n");

    // \n: Newline
    printf("Newline\n: Move to the next line.\n");

    // \r: Carriage return
    printf("Carriage return\r: Move to the beginning of the line.\n");

    // \t: Horizontal tab
    printf("Horizontal tab\t: Move to the next tab stop.\n");

    // \v: Vertical tab
    printf("Vertical tab\v: Move to the next vertical tab stop.\n");

    // \\: Backslash
    printf("Backslash\\: Print a literal backslash character.\n");

    // \': Single quote
    printf("Single quote\': Print a literal single quote character.\n");

    // \": Double quote
    printf("Double quote\": Print a literal double quote character.\n");

    // \0: Null character
    printf("Null character\0: Represents the end of a string.\n");

    return 0;
}
