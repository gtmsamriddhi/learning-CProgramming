#include <stdio.h>

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Pass the array to the function
    printArray(arr, size);
    printf ("\nLab 26(a): Samriddhi Gautam : BIT28");
    return 0;
}