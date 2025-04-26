#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Declare a 1-D array
    int *ptr = arr;                    // Pointer pointing to the first element of the array

    printf("Array elements using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    printf ("\n Lab 32(C) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
