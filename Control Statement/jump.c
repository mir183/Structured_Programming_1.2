#include <stdio.h>

int main() {
    // Break Statement
    printf("Break Statement Example:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Breaking the loop at i = 3.\n");
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // Continue Statement
    printf("Continue Statement Example:\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 3) {
            printf("Skipping the iteration at j = 3.\n");
            continue;
        }
        printf("%d ", j);
    }
    printf("\n\n");

    // Goto Statement
    printf("Goto Statement Example:\n");
    int k = 1;
    loop_start:
    if (k <= 5) {
        printf("%d ", k);
        k++;
        goto loop_start;
    }
    printf("\n");

    return 0;
}
