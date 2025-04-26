#include <stdio.h>

// Function to swap values using pass by address
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByAddress function: a = %d, b = %d\n", *a, *b);
}

// Function to swap values using pass by value (for comparison)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

int main() {
    int a = 5, b = 10;

    // Swap using pass by value
    printf("Before swapByValue function: a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After swapByValue function: a = %d, b = %d\n", a, b);

    // Swap using pass by address
    printf("\nBefore swapByAddress function: a = %d, b = %d\n", a, b);
    swapByAddress(&a, &b);
    printf("After swapByAddress function: a = %d, b = %d\n", a, b);
    printf ("\nLab 29(b): Samriddhi Gautam : BIT28");
    return 0;
}