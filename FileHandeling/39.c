#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    // Take the file name from the user
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write the sentence into the file
    fprintf(file, "This is a lab work of Structured Programming.\n");

    // Close the file
    fclose(file);

    printf("Text written to the file successfully.\n");

    return 0;
}