#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
};

// Function to display details of all students
void displayStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
    }
}

int main() {
    // Create an array of structures
    struct Student students[3] = {
        {"Ramesh", 10},
        {"Hari", 11},
        {"Sandip", 12}
    };

    // Pass the array of structures to the function
    displayStudents(students, 3);
    printf("\n Lab 36(d) : Samriddhi Gautam : BIT 28 ");
    return 0;
}