#include <stdio.h>
#include <math.h>

void solveQuadratic(double a, double b, double c) {
    double discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("The value of 'a' cannot be zero for a quadratic equation.\n");
    } else {
        solveQuadratic(a, b, c);
    }
    printf ("\n Lab 30(A) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
