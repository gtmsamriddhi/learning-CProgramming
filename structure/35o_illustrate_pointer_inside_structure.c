#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure with a pointer
struct Person {
    char *name;
    int age;
};

int main() {
    // Create a structure variable
    struct Person p1;

    // Allocate memory for the name pointer
    p1.name = (char *)malloc(50 * sizeof(char));

    // Assign values to the structure members
    strcpy(p1.name, "John Doe");
    p1.age = 25;

    // Print the structure members
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    // Free allocated memory
    free(p1.name);
    printf("\n Lab 35(o) : Samriddhi Gautam : BIT 28 ");
    return 0;
}