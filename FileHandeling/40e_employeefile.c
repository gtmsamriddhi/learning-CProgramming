#include <stdio.h>
#include <stdlib.h>

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;
    FILE *file;
    int n, choice;
    long int recordSize = sizeof(struct Employee);

    // Open the file in binary write mode
    file = fopen("employee.dat", "wb+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Add employee records until the user chooses to stop
    do {
        printf("\nEnter employee ID: ");
        scanf("%d", &emp.id);
        printf("Enter employee name: ");
        scanf(" %s", emp.name); 
        printf("Enter employee salary: ");
        scanf("%f", &emp.salary);

        // Write the employee record to the file
        fwrite(&emp, sizeof(struct Employee), 1, file);

        printf("Do you want to add another record? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    // Ask the user for the record number to display
    printf("\nEnter the record number to display: ");
    scanf("%d", &n);

    // Move the file pointer to the (n-1)th record
    fseek(file, (n - 1) * recordSize, SEEK_SET);

    // Read the nth record from the file
    if (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("\nRecord %d:\n", n);
        printf("ID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
    } else {
        printf("Record not found.\n");
    }

    // Close the file
    fclose(file);
    printf ("\nLab 40(e): Samriddhi Gautam : BIT28");
    return 0;
}