#include <stdio.h>

int main() {

    int number;
    printf(" Enter a positive integer: ");

    scanf("%d", &number);

    if (number > 0) {
        printf("\n Multiplication Table for %d:\n", number);
        for (int i = 1; i <= 10; i++) { 
            printf("%d x %d = %d\n", number, i, number * i);
            
        }
    } else {        
        printf("Please enter a positive integer.\n");
    }
    printf("Lab16(a) : Samriddhi Gautam : BIT28");
    return 0;
}