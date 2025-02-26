#include <stdio.h>

int main() {
    int num, reversedNum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);
    printf ("\n Lab 18(b): Samriddhi Gautam : BIT28");
    return 0;
}