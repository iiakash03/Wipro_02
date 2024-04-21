/*
A3. Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to check if all digits of a number are prime
bool allDigitsPrime(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (!isPrime(digit))
            return false;
        num /= 10;
    }
    return true;
}

// Function to find the nth number where each digit is prime
int findNthNumber(int n) {
    int count = 0;
    int num = 2; // Start from the first number

    while (count < n) {
        if (allDigitsPrime(num)) {
            count++;
        }
        num++;
    }

    return num - 1; // Return the last number found
}

int main() {
    int test_cases, n;
    printf("Enter the number of test cases: ");
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        printf("Enter N for test case %d: ", i + 1);
        scanf("%d", &n);

        int nth_number = findNthNumber(n);
        printf("Output for test case %d: %d\n", i + 1, nth_number);
    }

    return 0;
}
