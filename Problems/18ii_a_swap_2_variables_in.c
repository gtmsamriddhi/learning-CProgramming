#include <stdio.h>

int main() {
    int arr[2]; // Declare an array to hold two integers

    // Prompt the user to enter two integers
    printf("Enter two integers:\n");
    scanf("%d %d", &arr[0], &arr[1]);

    // Display the values before swapping
    printf("Before swapping: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    // Swap the values using a temporary variable
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    // Display the values after swapping
    printf("After swapping: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    printf("\nLab18(a): Samriddhi Gautam : BIT28");
    return 0;
}