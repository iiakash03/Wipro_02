/*Find a partition point in array

Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.

Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element.

Examples :

Input :  A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5

Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1
*/


#include <stdio.h>


int findPartitionPoint(int arr[], int n) {
    int maxToLeft[n], minToRight[n];
    
    // we created maxLeft to store the maximum element from the left side of the array
    int maxLeft = arr[0];
    for (int i = 0; i < n; i++) {
        maxLeft = (arr[i] > maxLeft) ? arr[i] : maxLeft;
        maxToLeft[i] = maxLeft;
    }

    // we created minRight array to store the minimum element from the right side of the array
    int minRight = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        minRight = (arr[i] < minRight) ? arr[i] : minRight;
        minToRight[i] = minRight;
    }

    // we are searching for the partition point by comparing maxLeft and minRight
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= maxToLeft[i] && arr[i] <= minToRight[i]) {
            return arr[i];
        }
    }
    
    return -1;
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

    int partitionPoint = findPartitionPoint(arr, n);
    if (partitionPoint != -1) {
        printf("Partition point found: %d\n", partitionPoint);
    } else {
        printf("No partition point found\n");
    }

    return 0;
}

