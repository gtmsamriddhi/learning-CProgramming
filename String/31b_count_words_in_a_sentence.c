#include <stdio.h>

int main() {
    char str[100];
    int words = 0, i;

    printf("\nEnter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            words++;
        }
    }

    printf("Number of words: %d\n", words);
    printf ("\n Lab 31(b) : Samriddhi Gautam : BIT 28 ");
    return 0;
}