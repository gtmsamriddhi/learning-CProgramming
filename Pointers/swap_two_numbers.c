#include <stdio.h>

// Function to swap two numbers using a temporary variable
void swapWithTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap two numbers without a temporary variable (using XOR)
void swapWithoutTemp(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using a temporary variable
    //swapWithTemp(&num1, &num2);

    //Swap without a temporary variable
    swapWithoutTemp(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}