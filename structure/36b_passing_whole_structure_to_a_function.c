#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
};

// Function to display student details
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

int main() {
    // Create a structure variable
    struct Student s1 = {"Samriddhi", 28};

    // Pass the whole structure to the function
    displayStudent(s1);
    printf("\n Lab 36(b) : Samriddhi Gautam : BIT 28 ");
    return 0;
}