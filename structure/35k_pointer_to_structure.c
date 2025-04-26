#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student student = {"Samriddhi", 28, 95.5}; // Initialize structure
    struct Student *ptr = &student;                  // Pointer to structure

    // Access structure members using the pointer
    printf("Student Details:\n");
    printf("Name: %s\n", ptr->name);  // Access using arrow operator (->)
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);


    printf("\n Lab 35(k) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
