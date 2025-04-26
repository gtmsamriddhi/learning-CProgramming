#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student student;
    FILE *file;

    // Writing to a file
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input data for a student
    printf("Enter roll: ");
    scanf("%d", &student.roll);
    printf("Enter name: ");
    scanf(" %[^\n]", student.name); // Read name with spaces
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Write the structure to the file
    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);

    // Reading from the file
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the structure from the file
    fread(&student, sizeof(struct Student), 1, file);
    fclose(file);

    // Display the read data
    printf("\nRead from file:\n");
    printf("Roll: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
    printf ("\nLab 40(a): Samriddhi Gautam : BIT28");
    return 0;
}