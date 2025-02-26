#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit, fact, i;

    // Input from user
    printf("\nEnter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    while (temp > 0) {
        digit = temp % 10;  // Extract last digit
        fact = 1;

        // Calculate factorial of digit
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;  // Add factorial to sum
        temp /= 10;   // Remove last digit
    }

    // Check if number is Strong Number
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);
       printf ("\nLab 20(f): Samriddhi Gautam : BIT28");
    return 0;
}
