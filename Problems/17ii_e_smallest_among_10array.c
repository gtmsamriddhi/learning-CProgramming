#include <stdio.h>

int main() {
    int arr[10];

    // Prompt the user to enter 10 integers
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the smallest
    int smallest = arr[0];

    // Iterate over the rest of the array and update smallest if a smaller element is found
    for (int i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Print the smallest integer
    printf("The smallest integer is: %d\n", smallest);
    printf ("\n Lab 17(e) : Samriddhi Gautam : BIT28");
    return 0;
}