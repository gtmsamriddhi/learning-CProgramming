#include <stdio.h>

int main() {
    int roll_no, arr[20], sum = 0;

    // Input the roll number
    printf("Enter your roll number: ");
    scanf("%d", &roll_no);

    // Store the first 20 multiples of the roll number in the array
    for (int i = 0; i < 20; i++) {
        arr[i] = roll_no * (i + 1);  // Multiples of roll number
        sum += arr[i];  // Calculate the sum
    }

    // Display the stored multiples
    printf("The first 20 multiples of %d are:\n", roll_no);
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }

    // Display the sum
    printf("\nSum of these numbers: %d\n", sum);
    printf ("\nLab17(c) : Samriddhi Gautam : BIT28");
    return 0;
}