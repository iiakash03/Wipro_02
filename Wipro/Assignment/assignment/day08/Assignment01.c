/*A2.Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 1000

// Function to generate the nth number made of given digits
char* generateNumber(int n) {
    char* queue[MAX_DIGITS]; // Queue to store generated numbers
    int front = 0, rear = 0;
    queue[rear++] = "1";
    queue[rear++] = "4";
    queue[rear++] = "6";
    queue[rear++] = "9";
    int count = 0;

    while (front != rear) {
        char* current = queue[front++];
        count++;

        if (count == n) {
            return current;
        }

        // Append new numbers by appending each digit to the current number
        queue[rear++] = strcat(strdup(current), "1");
        queue[rear++] = strcat(strdup(current), "4");
        queue[rear++] = strcat(strdup(current), "6");
        queue[rear++] = strcat(strdup(current), "9");
    }

    return NULL;
}

int main() {
    int test_cases, n;
    printf("Enter the number of test cases: ");
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        printf("Enter N: ");
        scanf("%d", &n);
        char* result = generateNumber(n);
        printf("Output: %s\n", result);
        free(result); // Free allocated memory
    }

    return 0;
}
