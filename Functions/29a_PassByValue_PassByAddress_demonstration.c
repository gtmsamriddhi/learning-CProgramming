#include <stdio.h>

// Function to demonstrate pass by value
void passByValue(int a, int b) {
    a = a + 10;
    b = b + 10;
    printf("Inside passByValue function: a = %d, b = %d\n", a, b);
}

// Function to demonstrate pass by address
void passByAddress(int *a, int *b) {
    *a = *a + 10;
    *b = *b + 10;
    printf("Inside passByAddress function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 5, b = 10;

    // Pass by value
    printf("Before passByValue function: a = %d, b = %d\n", a, b);
    passByValue(a, b);
    printf("After passByValue function: a = %d, b = %d\n", a, b);

    // Pass by address
    printf("\nBefore passByAddress function: a = %d, b = %d\n", a, b);
    passByAddress(&a, &b);
    printf("After passByAddress function: a = %d, b = %d\n", a, b);
    printf ("\nLab 29(a): Samriddhi Gautam : BIT28");
    return 0;
}