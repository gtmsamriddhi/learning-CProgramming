#include <stdio.h>
#include <stdlib.h>

// Define the structure for Student
struct Student {
    char name[50];
    char address[100];
    float marksC;
    float marksIS;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Input data for each student and calculate total marks
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);
        printf("Marks in C Language: ");
        scanf("%f", &students[i].marksC);
        printf("Marks in Information System: ");
        scanf("%f", &students[i].marksIS);
    }

    // Display total marks for each student
    printf("\nTotal Marks Obtained:\n");
    for (int i = 0; i < n; i++) {
        float totalMarks = students[i].marksC + students[i].marksIS;
        printf("%s: %.2f\n", students[i].name, totalMarks);
    }

    // Free dynamically allocated memory
    free(students);
    printf("\n Lab 35(m) : Samriddhi Gautam : BIT 28 ");
    return 0;
}