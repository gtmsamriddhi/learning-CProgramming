#include <stdio.h>

// Function to calculate x raised to the power n
double power(double x, int n) {
    double result = 1.0;
    int i;
    
    // Handle negative exponents
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    
    // Multiply x by itself n times
    for (i = 0; i < n; i++) {
        result *= x;
    }
    
    return result;
}

int main() {
    double x;
    int n;
    
    // Input values from user
    printf("\nEnter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    
    // Calculate and display the result
    printf("%.2f raised to the power %d is %.6f\n", x, n, power(x, n));
    printf ("\nLab 25(c): Samriddhi Gautam : BIT28");
    return 0;
}