#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1]; // Pointer to the second element
    int *ptr2 = &arr[3]; // Pointer to the fourth element

    // 1. Increment/Decrement
    printf("1. Increment/Decrement:\n");
    printf("ptr1 points to: %d\n", *ptr1);
    ptr1++; // Move to the next element
    printf("After increment, ptr1 points to: %d\n", *ptr1);
    ptr1--; // Move back to the previous element
    printf("After decrement, ptr1 points to: %d\n\n", *ptr1);

    // 2. Addition/Subtraction
    printf("2. Addition/Subtraction:\n");
    ptr1 = ptr1 + 2; // Move 2 elements ahead
    printf("After adding 2, ptr1 points to: %d\n", *ptr1);
    ptr1 = ptr1 - 1; // Move 1 element back
    printf("After subtracting 1, ptr1 points to: %d\n\n", *ptr1);

    // 3. Subtraction between two pointers
    printf("3. Subtraction between two pointers:\n");
    printf("ptr2 - ptr1 = %ld (number of elements between them)\n\n", ptr2 - ptr1);

    // 4. Comparison
    printf("4. Comparison:\n");
    if (ptr1 < ptr2) {
        printf("ptr1 points to an earlier element than ptr2.\n");
    } else {
        printf("ptr1 does NOT point to an earlier element than ptr2.\n");
    }
    printf ("\n Lab 32(g) : Samriddhi Gautam : BIT 28 ");
    return 0;
}