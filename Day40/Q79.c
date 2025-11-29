//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int r, c, i, j, a[50][50];

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Upper diagonal + main diagonal
    for (int startCol = 0; startCol < c; startCol++) {
        i = 0;
        j = startCol;

        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Lower diagonal (below main)
    for (int startRow = 1; startRow < r; startRow++) {
        i = startRow;
        j = c - 1;

        while (i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}