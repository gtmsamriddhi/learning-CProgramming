#include <stdio.h>

int main() {
    int num1[15], num2[15], sum[16] = {0};  // Result array with space for carry
    int carry = 0, i;

    // Input the first 15-digit number as individual digits
    printf("Enter first 15-digit number: ");
    for (i = 0; i < 15; i++) {
        scanf("%1d", &num1[i]);
    }

    // Input the second 15-digit number as individual digits
    printf("Enter second 15-digit number: ");
    for (i = 0; i < 15; i++) {
        scanf("%1d", &num2[i]);
    }

    // Add the numbers from right to left (handling carry)
    for (i = 14; i >= 0; i--) {
        int s = num1[i] + num2[i] + carry;  // Add corresponding digits and carry
        sum[i + 1] = s % 10;  // Store the current digit in the result
        carry = s / 10;  // Calculate carry for next iteration
    }

    sum[0] = carry;  // Store any leftover carry in the most significant place

    // Print the result
    printf("Sum: ");
    for (i = 0; i < 16; i++) {
        printf("%d", sum[i]);  // Print the sum, including carry if present
    }
    printf ("\n Lab 18(d) : Samriddhi Gautam : BIT28");
    return 0;
}
