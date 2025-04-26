#include <stdio.h>

int main() {
    int arr[5], i;
    FILE *file;

    // Input array elements
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Writing array to a file
    file = fopen("array.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the entire array to the file
    fwrite(arr, sizeof(int), 5, file);
    fclose(file);

    // Reading array from the file
    file = fopen("array.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the array from the file
    fread(arr, sizeof(int), 5, file);
    fclose(file);

    // Display the read array
    printf("\nArray read from file:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf ("\nLab 40(b): Samriddhi Gautam : BIT28");
    return 0;
}