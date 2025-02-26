
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits in num
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;  // Restore the original number

    // Compute sum of nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10; // Extract last digit
        result += pow(remainder, n);  // Add the nth power of the digit
        originalNum /= 10;  // Remove last digit
    }

    // Check if the sum matches the original number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
           printf ("\nLab17(d) : Samriddhi Gautam : BIT28");

    return 0;
}