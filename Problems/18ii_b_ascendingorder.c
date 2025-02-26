#include <stdio.h>

int main() {
    int arr[10], temp;

    // Taking 10 values as input
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in Ascending Order
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Swap if left value is greater than right value
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array (Ascending)
    printf("Array after sorting in Ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nLab18(b) : Samriddhi Gautam : BIT28");
    return 0;
}
