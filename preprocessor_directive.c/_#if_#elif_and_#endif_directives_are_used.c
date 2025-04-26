#include <stdio.h>

// Define a macro for AGE
#define AGE 25

int main() {
    printf("Demonstrating #if, #elif, and #endif directives in C\n");
    printf("The value of AGE is: %d\n\n", AGE);

    // Conditional compilation based on the value of AGE
    #if AGE < 18
        printf("You are a minor (under 18).\n");
    #elif AGE >= 18 && AGE < 30
        printf("You are a young adult (18 to 29).\n");
    #elif AGE >= 30 && AGE < 60
        printf("You are an adult (30 to 59).\n");
    #else
        printf("You are a senior citizen (60 or older).\n");
    #endif

    // Another example: Check if AGE is defined
    #ifdef AGE
        printf("AGE is defined, and its value is %d.\n", AGE);
    #else
        printf("AGE is not defined.\n");
    #endif
    printf ("\n Lab 42(b) : Samriddhi Gautam : BIT 28 ");
    return 0;
}