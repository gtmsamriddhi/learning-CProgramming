#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

// Function to print multiplication table of a number
void printMultiplicationTable(int num) {
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to check if a number is palindrome
void checkPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
}

int main() {
    int num;
    char choice;

    // Input number and choice
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter choice (E for Even/Odd, M for Multiplication Table, P for Palindrome): ");
    scanf(" %c", &choice);

    // Perform action based on choice
    switch (choice) {
        case 'E':
        case 'e':
            checkEvenOdd(num);
            break;
        case 'M':
        case 'm':
            printMultiplicationTable(num);
            break;
        case 'P':
        case 'p':
            checkPalindrome(num);
            break;
        default:
            printf("Invalid choice!\n");
    }
    printf ("\nLab 27: Samriddhi Gautam : BIT28");
    return 0;
}