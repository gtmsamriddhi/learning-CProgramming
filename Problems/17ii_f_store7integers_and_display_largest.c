#include <stdio.h>

int main() {
    int arr[7];

    // Prompt the user to enter 7 integers
    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int largest = arr[0];

    // Iterate over the rest of the array and update largest if a larger element is found
    for (int i = 1; i < 7; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest integer
    printf("The largest integer is: %d\n", largest);
    printf ("\n Lab 17(f) : Samriddhi Gautam : BIT28");
    return 0;
}