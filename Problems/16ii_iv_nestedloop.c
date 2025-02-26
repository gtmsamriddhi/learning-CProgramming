#include <stdio.h>

int main() {
    char ch;

    for (ch = 'E'; ch >= 'A'; ch--) {  
        for (char j = 'E'; j >= ch; j--) {  
            printf("%c ", j);
        }
        printf("\n");  
    }
    printf ("\n Lab16(iv) : Samriddhi Gautam : BIT28");
    return 0;
}