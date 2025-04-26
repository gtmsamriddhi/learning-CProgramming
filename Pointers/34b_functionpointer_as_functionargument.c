#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function that takes a function pointer as an argument
int operate(int x, int y, int (*operation)(int, int)) {
    return operation(x, y); 
}

int main() {
    int a = 10, b = 5;

    // Pass 'add' to 'operate'
    int result_add = operate(a, b, add);
    printf("Addition: %d\n", result_add); // Output: 15

    // Pass 'subtract' to 'operate'
    int result_subtract = operate(a, b, subtract);
    printf("Subtraction: %d\n", result_subtract); // Output: 5
    printf ("\n Lab 34(b) : Samriddhi Gautam : BIT 28 ");
    return 0;
}