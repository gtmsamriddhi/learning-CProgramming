#include <stdio.h>

// A simple function
void greet() {
    printf("Hello!\n");
}

int main() {
    // Create a function pointer
    void (*funcPtr)() = greet;

    // Use the function pointer to call the function
    funcPtr();
    printf ("\n Lab 34(a) : Samriddhi Gautam : BIT 28 ");
    return 0;
}
