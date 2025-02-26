#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, remainder;

    printf("\nEnter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal representation: %d\n", decimal);
    
    printf("\nLab18(f) : Samriddhi Gautam : BIT28");

    return 0;
}
