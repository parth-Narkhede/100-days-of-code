//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;
    int a[500], b[500], merged[1000];

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;


    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }


    while (i < m)
        merged[k++] = a[i++];

    while (j < n)
        merged[k++] = b[j++];

    
    for (int x = 0; x < k; x++) {
        printf("%d", merged[x]);
        if (x != k - 1) printf(" ");
    }
    printf("\n");

    return 0;
}