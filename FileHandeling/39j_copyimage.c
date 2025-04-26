#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFileName[100], targetFileName[100];
    char buffer[1024]; // Buffer to store data
    size_t bytesRead;

    // Input source file name
    printf("Enter the source image file name: ");
    scanf("%s", sourceFileName);

    // Input target file name
    printf("Enter the target image file name: ");
    scanf("%s", targetFileName);

    // Open the source file in binary read mode
    sourceFile = fopen(sourceFileName, "rb");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open the target file in binary write mode
    targetFile = fopen(targetFileName, "wb");
    if (targetFile == NULL) {
        printf("Error: Could not create target file.\n");
        fclose(sourceFile); // Close the source file
        return 1;
    }

    // Copy the file contents in chunks
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, targetFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(targetFile);

    printf("Image file copied successfully.\n");

    return 0;
}