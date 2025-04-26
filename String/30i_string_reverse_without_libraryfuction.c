#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j;
    char temp;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    j = strlen(str) - 1;  // Get last character index

    // Swap characters from both ends
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    printf ("\n Lab 30(i) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
