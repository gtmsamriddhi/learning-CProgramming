#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student students[3] = {
        {"Akriti", 20},
        {"Babita", 21},
        {"Charlie", 22}
    };

    // Pointer to an array of structures
    struct Student *ptr = students;

    // Access and print structure members using pointer
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name = %s, Age = %d\n", i + 1, (ptr + i)->name, (ptr + i)->age);
    }
    printf("\n Lab 35(n) : Samriddhi Gautam : BIT 28 ");
    
    return 0;
}