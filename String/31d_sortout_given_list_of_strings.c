#include <stdio.h>
#include <string.h>

int main() {
    char strings[8][10] = {"jump", "walk", "red", "green", "talk", "move", "look", "feel"};
    char temp[10];
    int i, j;

    // Sort the strings in ascending order
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    // Display the sorted strings
    printf("Sorted strings:\n");
    for (i = 0; i < 8; i++) {
        printf("%s\n", strings[i]);
    }
    printf ("\n Lab 31(d) : Samriddhi Gautam : BIT 28 ");
    return 0;
}