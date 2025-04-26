#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Initialize an array of structures
    struct Student students[3] = {
        {"Alice", 101, 95.5},
        {"Bob", 102, 85.0},
        {"Charlie", 103, 75.5}
    };

    // Display the initialized data
    printf("Student Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }

    
    printf("\nLab 35(g) : Samriddhi Gautam : BIT 28\n");

    return 0;
}