#include <stdio.h>

// Structure definition
struct Point {
    int x;
    int y;
    int z;
};

int main() {
    // Designated Initialization for Structures
    struct Point p1 = {.x = 1, .y = 2, .z = 3};
    printf("Point p1: (%d, %d, %d)\n", p1.x, p1.y, p1.z);

    // Designated Initialization for Arrays
    int array[5] = {[1] = 10, [3] = 20};
    printf("Array: [%d, %d, %d, %d, %d]\n", array[0], array[1], array[2], array[3], array[4]);

    return 0;
}
