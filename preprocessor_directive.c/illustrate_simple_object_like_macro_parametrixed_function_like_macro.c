#include <stdio.h>

// Object-like macro
#define PI 3.14159

// Function-like macro
#define AREA(r) (PI * r * r)

int main() {
    float radius = 5.0;

    printf("Value of PI: %f\n", PI);
    printf("Area of circle with radius %.2f: %.2f\n", radius, AREA(radius));
    printf ("\n Lab 42(a) : Samriddhi Gautam : BIT 28 ");
    return 0;
}