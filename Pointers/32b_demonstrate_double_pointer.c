#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;  // Pointer to num
    int **ptr2 = &ptr; // Pointer to pointer

    printf("Value of num: %d\n", num);
    printf("Value using single pointer: %d\n", *ptr);
    printf("Value using double pointer: %d\n", **ptr2);

    printf("Address of num: %p\n", (void*)&num);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address stored in ptr2: %p\n", (void*)ptr2);
    printf ("\n Lab 32(b) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
