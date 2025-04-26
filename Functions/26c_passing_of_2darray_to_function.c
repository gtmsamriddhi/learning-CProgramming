#include <stdio.h>

// Function to print 2-D array elements
void print2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Pass the 2-D array to the function
    print2DArray(rows, cols, arr);
    printf ("\nLab 26(c): Samriddhi Gautam : BIT28");
    return 0;
}