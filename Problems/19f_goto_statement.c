#include<stdio.h>
int main()
{
    int n;
    printf ("Enter any number : \t");
    scanf ("%d" , &n);
    if (n%2==0){
        goto even;
    }
    else {
        goto odd;
    }
even:
     printf ("The number you have entered is even");
    return 0;
odd:
    printf ("The number you have enterd is odd");
    printf ("\nLab 19(f): Samriddhi Gautam : BIT28");
}