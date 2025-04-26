#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int roll;
    char name[50];
    char grade;
    char gender;
    int age;
};

int main() {
    struct Student students[10];
    int choice;

    // Input for 10 students
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Grade: ");
        scanf(" %c", &students[i].grade); // Space before %c to consume newline
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender); // Space before %c to consume newline
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Menu-driven program
    while (1) {
        printf("\nMenu:\n");
        printf("1. Display names of all male students\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nNames of all male students:\n");
                for (int i = 0; i < 10; i++) {
                    if (students[i].gender == 'M' || students[i].gender == 'm') {
                        printf("%s\n", students[i].name);
                    }
                }
                break;
            case 2:
                printf("Exiting...\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
                // Clear the input buffer to avoid infinite loops
                while (getchar() != '\n'); // Clear any leftover input
        }
    }
    printf("\n Lab 38 : Samriddhi Gautam : BIT 28 ");
    return 0;
}