#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case: when the remainder is 0, return the divisor.
    return gcd(b, a % b); // Recursive call with swapped arguments and remainder.
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    printf ("\nLab 28(c): Samriddhi Gautam : BIT28");
    return 0;
}
