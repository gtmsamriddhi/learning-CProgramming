#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 1;
    printf("Enter positive integer n: ");
    scanf("%d", &n);
        printf("natural number less than %d:\n", n);
    while (i < n)
    {
        printf(" %d", i);
        i++;
    }
    printf("\n Lab17(a) : Samriddhi Gautam : BIT28");
    return 0;
}