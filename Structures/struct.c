#include <stdio.h>
#include <string.h>

// Declaration of a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Creating an instance of the 'Person' structure
    struct Person person1;

    // Assigning values to the members of the structure
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 175.5;

    // Accessing and printing the values from the structure
    printf("Person Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
