#include <stdio.h>

int main() {
    FILE *file;
    char sentence[100];
    char buffer[100];

    // Open the file in write mode
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write a sentence into the file
    printf("Enter a sentence to write into the file: ");
    fgets(sentence, sizeof(sentence), stdin); // Read input from user
    fputs(sentence, file); // Write the sentence to the file

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the contents of the file and display on screen
    printf("\nContents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}