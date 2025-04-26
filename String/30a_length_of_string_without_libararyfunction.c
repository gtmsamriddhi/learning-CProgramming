// C program to find the length of a string without using strlen()
#include <stdio.h>

int main() {
    char str[50];
    int i;

    printf("Enter a string: ");
    gets(str);  // Unsafe, better to use fgets(str, sizeof(str), stdin)

    // Loop to count characters until null terminator is encountered
    for (i = 0; str[i] != '\0'; i++);

    printf("\nLength of the string: %d\n", i);
    printf ("\n Lab 30(A) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
