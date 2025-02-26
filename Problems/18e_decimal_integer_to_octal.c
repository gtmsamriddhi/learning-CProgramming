#include <stdio.h>

int main() {
    int decimal, octal[32], i = 0;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    int num = decimal;

    // Convert decimal to octal
    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    // Display the octal number in reverse order
    printf("Octal representation of %d is: ", decimal);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
     printf("\nLab18(e): Samriddhi Gautam : BIT28");
    return 0;
}
