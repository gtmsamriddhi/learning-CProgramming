#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0, semicolons = 0, commas = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string from keyboard

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        } else if (str[i] == ' ') {
            spaces++;
        } else if (str[i] == ';') {
            semicolons++;
        } else if (str[i] == ',') {
            commas++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);
    printf("Semicolons: %d\n", semicolons);
    printf("Commas: %d\n", commas);
    printf ("\n Lab 31(a) : Samriddhi Gautam : BIT 28 ");
    return 0;
}