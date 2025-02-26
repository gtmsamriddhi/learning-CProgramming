#include <stdio.h>
int main()
{
    int i, j , num=1;
    for (i = 1; i <= 5; i++){

        for (j = 1; j <= i; j++){
            printf(" %d" , num);
            num++;
        }
        printf("\n");
    }
    printf("Lab 16(ix): Samriddhi Gautam : BIT 28");
    return 0;
}
