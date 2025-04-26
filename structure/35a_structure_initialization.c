#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Initialize the structure
    struct Person person = {"Alice", 25, 5.6};

    // Display the structure data
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.1f ft\n", person.height);
    printf ("\n Lab 35(a) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
