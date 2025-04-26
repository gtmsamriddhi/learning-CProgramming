#include <stdio.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile; // File pointers for input and output files
    int number; // To store each number read from the file

    // Open the input file DATA in read mode
    dataFile = fopen("DATA", "r");
    if (dataFile == NULL) {
        printf("Error: Could not open file 'DATA'!\n");
        return 1;
    }

    // Open the output file ODD in write mode
    oddFile = fopen("ODD", "w");
    if (oddFile == NULL) {
        printf("Error: Could not open file 'ODD'!\n");
        fclose(dataFile);
        return 1;
    }

    // Open the output file EVEN in write mode
    evenFile = fopen("EVEN", "w");
    if (evenFile == NULL) {
        printf("Error: Could not open file 'EVEN'!\n");
        fclose(dataFile);
        fclose(oddFile);
        return 1;
    }

    // Read numbers from DATA file and separate them into ODD and EVEN files
    printf("Processing numbers from 'DATA'...\n");
    while (fscanf(dataFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            // If the number is even, write to EVEN file
            fprintf(evenFile, "%d\n", number);
        } else {
            // If the number is odd, write to ODD file
            fprintf(oddFile, "%d\n", number);
        }
    }

    // Check for errors during reading
    if (ferror(dataFile)) {
        printf("Error occurred while reading from 'DATA'!\n");
    } else {
        printf("Numbers have been successfully separated into 'ODD' and 'EVEN' files.\n");
    }

    // Close all files
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    return 0;
}