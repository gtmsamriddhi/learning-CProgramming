#include <stdio.h>
#include <string.h>  // Required for strcpy()

int main() {
    char str1[50], str2[50];

    printf("\nEnter a string: ");
    fgets(str1, sizeof(str1), stdin);  
    strcpy(str2, str1);  // Simply copy str1 to str2

    printf("Copied string: %s", str2);
    printf ("\n Lab 30(d) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
