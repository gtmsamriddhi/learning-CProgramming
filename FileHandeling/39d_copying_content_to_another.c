#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    int ch;

    // Get the source file name from the user
    printf("Enter the source file name (e.g., source.txt): ");
    scanf("%s", sourceFilename);

    // Get the destination file name from the user
    printf("Enter the destination file name (e.g., destination.txt): ");
    scanf("%s", destFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'!\n", sourceFilename);
        perror("Details");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file '%s'!\n", destFilename);
        perror("Details");
        fclose(sourceFile);
        return 1;
    }

    // Copy the file character by character
    printf("Copying file...\n");
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Check for errors during the copy process
    if (ferror(sourceFile)) {
        printf("Error occurred while reading from the source file!\n");
    } else if (ferror(destFile)) {
        printf("Error occurred while writing to the destination file!\n");
    } else {
        printf("File copied successfully from '%s' to '%s'!\n", sourceFilename, destFilename);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}