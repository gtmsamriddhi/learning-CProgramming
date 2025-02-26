#include <stdio.h>

int main() {
  int a[3][3], i, j, sum = 0;

  printf("Enter elements of matrix\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("The matrix is: \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  // Calculate the sum of the diagonal elements.
  for (i = 0; i < 3; i++) {
    sum += a[i][i]; // Add the elements on the main diagonal.
    if (i != 2) { // Add the elements on the secondary diagonal, except for the center element.
      sum += a[i][2 - i];
    }
  }

  printf("The sum of the diagonal elements is: %d\n", sum);
  printf("Lab 19(c): Samriddhi Gautam : BIT28\n");

  return 0;
}