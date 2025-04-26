#include <stdio.h>

// Function to calculate sum
int sum(int a, int b) {
    return a + b;
}

// Function to calculate difference
int difference(int a, int b) {
    return a - b;
}

// Function to calculate product
int product(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Call functions and display results
    printf("Sum: %d\n", sum(num1, num2));
    printf("Difference: %d\n", difference(num1, num2));
    printf("Product: %d\n", product(num1, num2));
    printf ("\nLab 25(a): Samriddhi Gautam : BIT28");
    return 0;
}
