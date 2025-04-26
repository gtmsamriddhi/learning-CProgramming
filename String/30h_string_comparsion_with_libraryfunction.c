#include <stdio.h>
#include <string.h>  // Required for strcmp()

int main() {
    char str1[50], str2[50];

    printf("\nEnter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare using strcmp()
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
        printf ("\n Lab 30(h) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
