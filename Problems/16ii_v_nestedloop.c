#include <stdio.h>

int main() {  
    int i, j;
    char ch = 'A';
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf(" %c", ch);
        }
        printf("\n");
        ch++ ;
    }
    printf("Lab 16(v): Samriddhi Gautam : BIT 28");
    return 0;
}
