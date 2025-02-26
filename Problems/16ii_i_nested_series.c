#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++){

        for (j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    printf("Lab 16(a): Samriddhi Gautam : BIT 28");
    return 0;
}
