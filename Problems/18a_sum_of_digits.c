#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf ("\n Lab 18(a) : Samriddhi Gauam : BIT28 ");
    return 0;
}