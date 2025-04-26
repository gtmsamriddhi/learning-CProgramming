#include <stdio.h>

int main() {
    // Array of pointers to strings
    const char *fruits[] = {
        "Apple",
        "Banana",
        "Cherry",
        "Date",
        "Elderberry"
    };

    int numFruits = sizeof(fruits) / sizeof(fruits[0]);

    // Print each string using the array of pointers
    printf("List of fruits:\n");
    for (int i = 0; i < numFruits; i++) {
        printf("%d: %s\n", i + 1, fruits[i]);
    }
    printf ("\n Lab 32(f) : Samriddhi Gautam : BIT 28 ");
    return 0;
}