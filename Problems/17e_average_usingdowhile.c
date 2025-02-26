#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    char choice;

    do {
        // Take number input
        printf("Enter a number: ");
        scanf("%d", &num);

        sum += num;  // Add to sum
        count++;     // Increase count

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Space before %c avoids newline issue

    } while (choice == 'y' || choice == 'Y'); // Continue if user enters 'y' or 'Y'

    // Calculate and display average
    if (count > 0)
        printf("Average of entered numbers: %.2f\n", (float)sum / count);
    else
        printf("No numbers were entered.\n");
        printf ("\n Lab 17(e) : Samriddhi Gautam : BIT 28");
    return 0;
}
