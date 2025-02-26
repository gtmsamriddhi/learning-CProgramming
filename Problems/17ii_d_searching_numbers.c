#include <stdio.h>

int main() {
    int arr[] = {19, 95, 20, 17, 36, 18, 102, 905, 66};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int roll;
    int found = 0; // Initialize a flag to 0 (not found)

    // Ask the user to enter a number
    printf("Enter your rollno: ");
    scanf("%d", &roll);

    // Search for the number in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == roll) {
            found = 1; // Set the flag to 1 (found)
            break; // Exit the loop since the number is found
        }
    }

    // Display the result based on the flag
    if (found == 1) {
        printf("Search is successful\n");
    } else {
        printf("Search is unsuccessful\n");
    }
    printf ("\nLab17(d): Samriddhi Gautam :BIT28");
    return 0;
}