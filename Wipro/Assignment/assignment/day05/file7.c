/*Q3. print Sum of Even and  sum of odd values between 1 to 50*/


#include <stdio.h>

int main() {
    int sumEven = 0, sumOdd = 0;
    for (int i = 1; i <= 50; i++) {
       
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    printf("Sum of even numbers between 1 to 50: %d\n", sumEven);
    printf("Sum of odd numbers between 1 to 50: %d\n", sumOdd);

    return 0;
}
