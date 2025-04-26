#include <stdio.h>
#include <string.h>

// Define the structure
struct Employee {
    char name[50];
    char address[100];
    float salary;
};

int main() {
    // Declare an array of 5 employees
    struct Employee emp[5];

    // Read data for 5 employees
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name); // Simple input for name (no spaces)

        printf("Address: ");
        scanf("%s", emp[i].address); // Simple input for address (no spaces)

        printf("Salary: ");
        scanf("%f", &emp[i].salary); // Input for salary
    }

    // Sort employees by name (ascending order)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                // Swap the employees
                struct Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    // Display employee information in ascending order of names
    printf("\nEmployee Information (Sorted by Name):\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("Address: %s\n", emp[i].address);
        printf("Salary: %.2f\n", emp[i].salary);
    }
    printf("\n Lab 35(f) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
