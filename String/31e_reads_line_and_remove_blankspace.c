#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a line: ");
    fgets(str, 100, stdin);

    // Remove blanks
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i]; // Copy non-blank characters
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("Line without blanks: %s\n", result);
    printf ("\n Lab 31(e) : Samriddhi Gautam : BIT 28 ");

    return 0;
}