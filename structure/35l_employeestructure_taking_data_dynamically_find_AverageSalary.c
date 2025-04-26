#include <stdio.h>
#include <stdlib.h>

// Define the structure for Employee
struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n;
    float totalSalary = 0, averageSalary;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n employees
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    // Input data for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        totalSalary += employees[i].salary; // Add to total salary
    }

    // Calculate average salary
    averageSalary = totalSalary / n;
    printf("\nAverage Salary: %.2f\n", averageSalary);

    // Free dynamically allocated memory
    free(employees);
    printf("\n Lab 35(l) : Samriddhi Gautam : BIT 28 ");
    return 0;
}