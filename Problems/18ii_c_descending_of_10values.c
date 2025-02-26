#include <stdio.h>

int main() {
    int arr[10], temp;

    // Taking 10 values as input
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Algorithm for Descending Order
    for (int i = 0; i < 10 - 1; i++) { // Outer loop for passes
        for (int j = 0; j < 10 - i - 1; j++) { // Inner loop for comparison
            if (arr[j] < arr[j + 1]) { // Swap if left value is smaller than right value
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Array after sorting in descending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf ("\n Lab18(c) : Samriddhi Gautam : BIT28");
    return 0;
}
