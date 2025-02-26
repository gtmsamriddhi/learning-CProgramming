#include <stdio.h>
#include <conio.h>

int main()
{
   int n, a=0, b=1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) 
    {
        printf ("%d ", a);
    c= a + b;
    a=b ;
    b=c ;


    }
    printf ("\nLab16(e) : Samriddhi Gautam : BIT28");
    return 0;
}