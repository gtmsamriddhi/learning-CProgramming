#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2, *arr3;
    int n = 5;

    // Using malloc
    arr1 = (int*)malloc(n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }
    printf("Enter %d integers for arr1 (malloc):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Using calloc
    arr2 = (int*)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        free(arr1);
        return 1;
    }
    printf("Enter %d integers for arr2 (calloc):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Using realloc to resize arr1
    int newSize = 10;
    arr3 = (int*)realloc(arr1, newSize * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory reallocation failed for arr1.\n");
        free(arr1);
        free(arr2);
        return 1;
    }
    printf("Enter %d more integers for arr3 (realloc):\n", newSize - n);
    for (int i = n; i < newSize; i++) {
        scanf("%d", &arr3[i]);
    }

    // Display arrays
    printf("arr1 (malloc): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2 (calloc): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\narr3 (realloc): ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // Free allocated memory10 20
    free(arr2);
    free(arr3);
    printf ("\nLab 33: Samriddhi Gautam : BIT28");

    return 0;
}