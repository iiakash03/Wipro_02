/*Q1. rotate array every kth element
i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7
i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 7 6 5 4 9 8*/

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateKthElement(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        // Calculate the end index of the segment to reverse
        int end = (i + k - 1 < n) ? i + k - 1 : n - 1;
        // Reverse the segment
        reverse(arr, i, end);
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateKthElement(arr, n, k);

    printf("Array after rotating every %dth element:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

