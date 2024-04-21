
/*A1. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) 
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return false;
    }
    return true;
}


void findPrimePairs(int number) {
    int count = 0;

    printf("%d = ", number);

    for (int i = 2; i <= number / 2; i++) {
        if (isPrime(i) && isPrime(number - i)) {
            printf("%d + %d, ", i, number - i);
            count++;
        }
    }
    printf("\n");
    printf("NoofWays = %d\n", count);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    findPrimePairs(num);

    return 0;
}
