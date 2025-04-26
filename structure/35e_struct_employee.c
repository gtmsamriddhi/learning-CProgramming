#include <stdio.h>
#include <string.h>

// Define the structure
struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    float totalSalary = 0.0;

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        totalSalary += employees[i].salary;
    }

    // Calculate average salary
    float averageSalary = totalSalary / n;
    printf("\nAverage Salary: %.2f\n", averageSalary);

   
    printf("\n Lab 35(e) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
