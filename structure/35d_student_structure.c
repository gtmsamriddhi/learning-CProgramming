#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    float marks;
    char remarks[100];
};

int main() {
    struct Student students[5];

    // Read records of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Remarks: ");
        scanf(" %[^\n]", students[i].remarks);
    }

    // Display records of 5 students
    printf("\nStudent Records:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f, Remarks: %s\n",
               students[i].name, students[i].roll, students[i].marks, students[i].remarks);
    }

    printf("\n Lab 35(d) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
