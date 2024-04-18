#include <stdio.h>

void findSubarray(int arr[], int n, int sum) {
    int start = 0, end = 0;
    int currentSum = arr[0];

    while (end < n) {
        if (currentSum == sum) {
            printf("Sum found between indexes %d and %d\n", start, end);
            return;
        }
        if (currentSum < sum) {
            end++;
            if (end < n)
                currentSum += arr[end];
        } else {
            currentSum -= arr[start];
            start++;
        }
    }
    printf("No subarray found\n");
}



int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum;
    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    findSubarray(arr, n, sum);

    return 0;
}
