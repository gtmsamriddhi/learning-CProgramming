#include <stdio.h>
#include <string.h>  // Required for strcat()

int main() {
    char str1[100], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1
    str1[strcspn(str1, "\n")] = '\0';

    strcat(str1, str2);  // Simple function call

    printf("\nConcatenated string: %s", str1);
    printf ("\n Lab 30(f) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
