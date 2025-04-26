#include <stdio.h>

// Function to convert lowercase to uppercase using pointers
void toUpper(char *ch) {
    if (*ch >= 'a' && *ch <= 'z') {
        *ch = *ch - 32; // Convert to uppercase
    }
}

int main() {
    char ch;

    // Input a lowercase letter
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);

    // Call the function to convert to uppercase
    toUpper(&ch);

    // Display the result
    printf("Uppercase letter: %c\n", ch);
    printf ("\n Lab 32(e) : Samriddhi Gautam : BIT 28 ");
    return 0;
}