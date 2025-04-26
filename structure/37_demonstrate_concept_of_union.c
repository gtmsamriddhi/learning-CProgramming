#include <stdio.h>
#include <string.h> 

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Store and print an integer
    data.i = 10;
    printf("Integer value: %d\n", data.i);

    // Store and print a float
    data.f = 3.14;
    printf("Float value: %.2f\n", data.f);

    // Store and print a string
    strcpy(data.str, "Hello");
    printf("String value: %s\n", data.str);
    printf("\n Lab 37 : Samriddhi Gautam : BIT 28 ");
    return 0;
}