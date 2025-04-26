#include <stdio.h>
#include <string.h>  // Required for strrev()

int main() {
    char str[50];

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';  // Remove newline from input
    strrev(str);  // Reverse the string

    printf("Reversed string: %s\n", str);
    printf ("\n Lab 30(j) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
