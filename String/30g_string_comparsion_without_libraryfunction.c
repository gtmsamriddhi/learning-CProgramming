#include <stdio.h>

int main() {
    char str1[50], str2[50];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare each character one by one
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;  // Strings are different
            break;
        }
        i++;
    }

    // If both strings end at the same position, they are equalP
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
        printf ("\n Lab 30(g) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
