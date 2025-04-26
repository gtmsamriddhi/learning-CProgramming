#include <stdio.h>
#include <string.h>  // Required for strlen()

int main() {
    char str[50];

    printf("Enter a string: ");
    gets(str);  

    // Using strlen() to find length
    int length = strlen(str);

    printf("\nLength of the string: %d", length);printf ("\n Lab 30(b) : Samriddhi Gautam : BIT 28 ");
    
    return 0;
}
