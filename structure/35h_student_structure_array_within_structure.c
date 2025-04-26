#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Student {
    char name[50];
    char class[10];
    char section;
    int marks[6]; // Array to store marks for 6 subjects
};

// Function to calculate percentage
float calculatePercentage(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return (float)total / n; // Average marks as percentage
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Class: ");
        scanf("%s", students[i].class);

        printf("Section: ");
        scanf(" %c", &students[i].section); // Space before %c to consume newline

        printf("Enter marks for 6 subjects:\n");
        for (int j = 0; j < 6; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Display student details and percentage
    printf("\nStudent Details and Percentage:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Class: %s\n", students[i].class);
        printf("Section: %c\n", students[i].section);
        printf("Percentage: %.2f%%\n", calculatePercentage(students[i].marks, 6));
    }

    // Free dynamically allocated memory
    free(students);

    printf("\nLab 35(h) : Samriddhi Gautam : BIT 28\n");

    return 0;
}