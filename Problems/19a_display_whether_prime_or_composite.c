#include <stdio.h>

int main() {
    int n, count=0;

    printf("Enter any number: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("%d is not a prime or composite number.\n", n);
        return 0;
    }
    for(int i=1; i<=n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if(count==2) {
        printf ("%d is a prime number\n", n);
    }
    else{
        printf ("%d is a composite number\n", n);
    }
        printf("\n Lab19(a) : Samriddhi Gautam : BIT28");
    return 0;
}