#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Free the allocated memory
    free(arr);
    printf ("\nLab 33(d): Samriddhi Gautam : BIT28");
    return 0;
}
