// C Program to Copy a String Without Using strcpy() 
#include <stdio.h>

int main() {
    char str1[50], str2[50];  
    int i;

    printf("\nEnter a string: ");
    fgets(str1, sizeof(str1), stdin);  // Safe input

    // Manually copying characters
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';  // Add null terminator

    printf("Copied string: %s", str2);
    printf ("\n Lab 30(c) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
