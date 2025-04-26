#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50], temp[50];
    int i, j;

    printf("Enter names of 5 persons:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    // Sort names in ascending order
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    printf ("\n Lab 31(c) : Samriddhi Gautam : BIT 28 ");
    return 0;
}