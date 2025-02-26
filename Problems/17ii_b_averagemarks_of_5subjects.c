
#include <stdio.h>

int main() {
    float marks[5];
    float sum = 0;

    // Prompt the user to enter the marks of five subjects
    printf("Enter the marks of five subjects:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate the average marks
    float average = sum / 5;

    // Print the average marks
    printf("The average marks are: %.2f\n", average);

    // Print the lab information
    printf("Lab17(b) : Samriddhi Gautam : BIT28\n");

    return 0;
}