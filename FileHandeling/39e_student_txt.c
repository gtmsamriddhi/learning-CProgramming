#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    char address[100];
    float marks;
};

int main() {
    struct Student student;
    FILE *file;

    // Input student details
    printf("Enter student details:\n");
    printf("Name: ");
    scanf(" %[^\n]", student.name); // Read name with spaces
    printf("Roll: ");
    scanf("%d", &student.roll);
    printf("Address: ");
    scanf(" %[^\n]", student.address); // Read address with spaces
    printf("Marks: ");
    scanf("%f", &student.marks);

    // Open the file in write mode
    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write student details to the file using fprintf()
    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Roll: %d\n", student.roll);
    fprintf(file, "Address: %s\n", student.address);
    fprintf(file, "Marks: %.2f\n", student.marks);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display the contents of the file using fscanf()
    printf("\nContents of student.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}