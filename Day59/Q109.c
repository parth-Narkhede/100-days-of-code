//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;

    int arr[1000]; // adjust size if you need larger arrays
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    if (scanf("%d", &k) != 1) return 0;

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    int currentSum = 0;
    for (int i = 0; i < k; i++) currentSum += arr[i];

    int maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum += arr[i];
        currentSum -= arr[i - k];
        if (currentSum > maxSum) maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}