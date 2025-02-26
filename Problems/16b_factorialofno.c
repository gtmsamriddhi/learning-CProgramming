#include <stdio.h>

int main()
{

    int number, fact = 1;
    printf(" Enter any integer: ");

    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        fact = fact * i;
    {
        printf("Factorial of given number is : %d ", fact);
    }
    printf("\nLab16(b) : Samriddhi Gautam : BIT28");

    return 0;
}