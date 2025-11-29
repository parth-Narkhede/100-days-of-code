//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float num = 2 * i;
        float den = 4 * i - 1;
        sum += num / den;
    }

    printf("Sum = %.4f\n", sum);

    return 0;
}