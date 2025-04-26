#include <stdio.h>
#define PI 3.14159  // Defining symbolic constant for PI

// Function to calculate area of a circle
float AreaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius1, radius2; 
    
    // Input two radii
    printf("\nEnter radius of first circle: ");
    scanf("%f", &radius1);
    printf("Enter radius of second circle: ");
    scanf("%f", &radius2);
    
    // Calculate and display areas
    printf("Area of first circle: %.2f\n", AreaOfCircle(radius1));
    printf("Area of second circle: %.2f\n", AreaOfCircle(radius2));
    printf ("\nLab 25(b): Samriddhi Gautam : BIT28");
    return 0;
}