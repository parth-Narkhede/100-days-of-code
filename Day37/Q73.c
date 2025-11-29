//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10], rowSum[10];

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}