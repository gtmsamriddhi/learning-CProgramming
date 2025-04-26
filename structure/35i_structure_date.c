#include <stdio.h>
#include <string.h>

// Define the structure for date
struct Date {
    int day, month, year;
};

// Define the structure for employee
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date birthday; // Nested structure
};

int main() {
    struct Employee emp;

    // Input details for the employee
    printf("Enter employee's name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee's ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee's salary: ");
    scanf("%f", &emp.salary);
    printf("Enter employee's birthday (day, month, year): ");
    scanf("%d %d %d", &emp.birthday.day, &emp.birthday.month, &emp.birthday.year);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Birthday: %02d-%02d-%d\n", emp.birthday.day, emp.birthday.month, emp.birthday.year);

    printf("\n Lab 35(i) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
