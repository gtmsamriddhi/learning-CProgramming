#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
    char remarks[100];
};

int main() {
    struct Student student;

    // Read data
    printf("Enter name: ");
    scanf("%s", student.name); // Read name
    printf("Enter roll number: ");
    scanf("%d", &student.roll); // Read roll number
    printf("Enter marks: ");
    scanf("%f", &student.marks); // Read marks
    printf("Enter remarks: ");
    scanf(" %[^\n]", student.remarks); // Read remarks (including spaces)

    // Display data
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);
    printf("Remarks: %s\n", student.remarks);
    printf ("\n Lab 35(B) : Samriddhi Gautam : BIT 28 ");
    return 0;
}