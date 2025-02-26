#include <stdio.h>

int main() {
    
    for (int table = 2; table <= 15; table++) {
        printf("Multiplication Table of %d:\n", table);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", table, i, table * i);
        }
        printf("\n"); 
    }

    printf("Lab19(b) : Samriddhi Gautam : BIT28\n");
    return 0;
}