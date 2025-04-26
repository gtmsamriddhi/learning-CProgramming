#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
};

// Function to display student details
void displayStudent(char name[], int age) {
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
}

int main() {
    // Create a structure variable
    struct Student s1 = {"Samriddhi", 28};

    // Pass individual members to the function
    displayStudent(s1.name, s1.age);
    printf("\n Lab 36(a) : Samriddhi Gautam : BIT 28 ");
    return 0;
}