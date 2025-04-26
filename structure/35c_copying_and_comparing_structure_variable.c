#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Declare two structure variables
    struct Student s1, s2;

    // Input data for the first student
    printf("Enter details for student 1:\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; // Remove newline from fgets
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Copy s1 to s2
    s2 = s1; // Copying structure variables

    // Display copied data
    printf("\nDetails of student 2 (copied from student 1):\n");
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Marks: %.2f\n", s2.marks);

    // Compare s1 and s2
    if (strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("\nThe structures are identical.\n");
    } else {
        printf("\nThe structures are not identical.\n");
    }
    printf ("\n Lab 35(c) : Samriddhi Gautam : BIT 28 ");
    return 0;
}