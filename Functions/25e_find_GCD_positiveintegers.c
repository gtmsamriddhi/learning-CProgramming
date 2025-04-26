#include <stdio.h>

// Function to find GCD
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf ("\nLab 25(e): Samriddhi Gautam : BIT28");
    return 0;
}
