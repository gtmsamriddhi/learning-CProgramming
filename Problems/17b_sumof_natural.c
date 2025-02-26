#include <stdio.h>

int main()
{
    int n, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf (" The sum of all natural numbers from 1 to %d is :  %d\n" , n , sum);
    printf ("\n Lab17(b) : Samriddhi Gautam : BIT28");
    return 0;
}