#include <stdio.h>

int main() {
    int num, temp, sum, digit, count, i, mul;
    int armstrongCount = 0;  

    printf("Armstrong numbers between 1 and 5000 are:\n");


    for (num = 1; num <= 5000; num++) {
        temp = num;
        sum = 0;
       
        count = 0;
        int temp2 = temp;
        while (temp2 > 0) {
            temp2 /= 10;
            count++;
        }


        temp = num;
        while (temp > 0) {
            digit = temp % 10;

        
            for (i = 0; i < count; i++) {
                mul *= digit;
            }

            sum += mul;
            temp /= 10;
        }
        if (sum == num) {
            printf("%d ", num);
            armstrongCount++;
        }
    }

   
    printf("\nTotal Armstrong numbers: %d\n", armstrongCount);
     printf ("\nLab 20(e): Samriddhi Gautam : BIT28");
    return 0;
}
