#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define the Student structure
struct Student {
    int roll;
    char name[50];
    char address[100];
    float marks;
};

// Function to display a single student record
void displayStudent(struct Student s) {
    printf("Roll: %d, Name: %s, Address: %s, Marks: %.2f\n", s.roll, s.name, s.address, s.marks);
}

int main() {
    FILE *file, *tempFile;
    struct Student s, students[100]; // Array for sorting
    int choice, roll, found, i, count;
    char name[50];
    char filename[] = "students.dat";

    while (1) {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Add new record\n");
        printf("2. Edit/Modify record\n");
        printf("3. Delete record\n");
        printf("4. Display all records\n");
        printf("5. Display records in alphabetical order of name\n");
        printf("6. Display information of given roll\n");
        printf("7. Display information of given name\n");
        printf("8. Display information of all students whose marks >= 80\n");
        printf("9. Display information of all students whose address is Kathmandu\n");
        printf("10. Exit\n");
        printf("Enter your choice (1-10): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add new record
                file = fopen(filename, "ab"); // Open in append binary mode
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                printf("Enter roll: ");
                scanf("%d", &s.roll);
                getchar(); // Clear buffer
                printf("Enter name: ");
                fgets(s.name, 50, stdin);
                s.name[strcspn(s.name, "\n")] = 0; // Remove newline
                printf("Enter address: ");
                fgets(s.address, 100, stdin);
                s.address[strcspn(s.address, "\n")] = 0;
                printf("Enter marks: ");
                scanf("%f", &s.marks);
                fwrite(&s, sizeof(struct Student), 1, file);
                printf("Record added successfully!\n");
                fclose(file);
                break;

            case 2: // Edit/Modify record
                printf("Enter roll number to modify: ");
                scanf("%d", &roll);
                file = fopen(filename, "rb");
                tempFile = fopen("temp.dat", "wb");
                if (file == NULL || tempFile == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                found = 0;
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    if (s.roll == roll) {
                        found = 1;
                        printf("Enter new name: ");
                        getchar();
                        fgets(s.name, 50, stdin);
                        s.name[strcspn(s.name, "\n")] = 0;
                        printf("Enter new address: ");
                        fgets(s.address, 100, stdin);
                        s.address[strcspn(s.address, "\n")] = 0;
                        printf("Enter new marks: ");
                        scanf("%f", &s.marks);
                    }
                    fwrite(&s, sizeof(struct Student), 1, tempFile);
                }
                fclose(file);
                fclose(tempFile);
                remove(filename);
                rename("temp.dat", filename);
                if (found) {
                    printf("Record modified successfully!\n");
                } else {
                    printf("Roll number not found!\n");
                }
                break;

            case 3: // Delete record
                printf("Enter roll number to delete: ");
                scanf("%d", &roll);
                file = fopen(filename, "rb");
                tempFile = fopen("temp.dat", "wb");
                if (file == NULL || tempFile == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                found = 0;
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    if (s.roll == roll) {
                        found = 1;
                        continue; // Skip writing this record to temp file
                    }
                    fwrite(&s, sizeof(struct Student), 1, tempFile);
                }
                fclose(file);
                fclose(tempFile);
                remove(filename);
                rename("temp.dat", filename);
                if (found) {
                    printf("Record deleted successfully!\n");
                } else {
                    printf("Roll number not found!\n");
                }
                break;

            case 4: // Display all records
                file = fopen(filename, "rb");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                printf("\nAll Records:\n");
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    displayStudent(s);
                }
                fclose(file);
                break;

            case 5: // Display records in alphabetical order of name
                file = fopen(filename, "rb");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                count = 0;
                while (fread(&students[count], sizeof(struct Student), 1, file)) {
                    count++;
                }
                fclose(file);
                // Bubble sort by name
                for (i = 0; i < count - 1; i++) {
                    for (int j = 0; j < count - i - 1; j++) {
                        if (strcmp(students[j].name, students[j + 1].name) > 0) {
                            struct Student temp = students[j];
                            students[j] = students[j + 1];
                            students[j + 1] = temp;
                        }
                    }
                }
                printf("\nRecords in Alphabetical Order:\n");
                for (i = 0; i < count; i++) {
                    displayStudent(students[i]);
                }
                break;

            case 6: // Display information of given roll
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                file = fopen(filename, "rb");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                found = 0;
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    if (s.roll == roll) {
                        found = 1;
                        printf("\nRecord Found:\n");
                        displayStudent(s);
                        break;
                    }
                }
                if (!found) {
                    printf("Roll number not found!\n");
                }
                fclose(file);
                break;

            case 7: // Display information of given name
                printf("Enter name to search: ");
                getchar();
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;
                file = fopen(filename, "rb");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                found = 0;
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    if (strcmp(s.name, name) == 0) {
                        found = 1;
                        printf("\nRecord Found:\n");
                        displayStudent(s);
                    }
                }
                if (!found) {
                    printf("Name not found!\n");
                }
                fclose(file);
                break;

            case 8: // Display information of all students whose marks >= 80
                file = fopen(filename, "rb");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                found = 0;
                printf("\nStudents with Marks >= 80:\n");
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    if (s.marks >= 80) {
                        found = 1;
                        displayStudent(s);
                    }
                }
                if (!found) {
                    printf("No students with marks >= 80 found!\n");
                }
                fclose(file);
                break;

            case 9: // Display information of all students whose address is Kathmandu
                file = fopen(filename, "rb");
                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }
                found = 0;
                printf("\nStudents from Kathmandu:\n");
                while (fread(&s, sizeof(struct Student), 1, file)) {
                    if (strcmp(s.address, "Kathmandu") == 0) {
                        found = 1;
                        displayStudent(s);
                    }
                }
                if (!found) {
                    printf("No students from Kathmandu found!\n");
                }
                fclose(file);
                break;

            case 10: // Exit
                printf("Exiting the program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please enter a number between 1 and 10.\n");
        }
    }

    return 0;
}