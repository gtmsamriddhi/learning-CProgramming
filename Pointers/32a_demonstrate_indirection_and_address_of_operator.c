#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;  // Pointer to num
    
    printf("Value of num: %d\n", num);
    printf("Value using pointer dereference (*ptr): %d\n", *ptr);
    
    printf("Address of num (&num): %p\n", (void*)&num);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address of ptr (&ptr): %p\n", (void*)&ptr);
    printf ("\n Lab 32(a) : Samriddhi Gautam : BIT 28 ");

    return 0;
}
