#include <stdio.h>

int main() {
    char str1[100], str2[50];  
    int i = 0, j = 0;

    printf("\nEnter first string: ");
    fgets(str1, sizeof(str1), stdin);  

    printf("\nEnter second string: ");
    fgets(str2, sizeof(str2), stdin);  

    // Find the end of str1 (excluding newline)
    while (str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }

    str1[i] = '\0';  // Null-terminate

    printf("Concatenated string: %s", str1);
    printf ("\n Lab 30(e) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
