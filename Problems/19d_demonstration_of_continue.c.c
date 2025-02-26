#include <stdio.h>

int main() {
    printf ("Even numbers from 2 to 20 except( 14 & 18)are : ");
    for (int num = 2; num <= 20; num += 2) {  // Loop through even numbers from 2 to 20
        if (num == 14 || num == 18) {
            continue;  // Skip 14 and 18
        }
        printf(" %d \n", num);
    }
    printf ("\nLab19(d) : Samriddhi Gautam : BIT28");
    return 0;
}