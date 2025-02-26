#include <stdio.h>

int main() {
    int decimal, binary[32];
    int i = 0;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    int num = decimal;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary representation of %d is: ", decimal);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
     printf("\n Lab18(d) : Samriddhi Gautam : BIT28");
    return 0;
}
