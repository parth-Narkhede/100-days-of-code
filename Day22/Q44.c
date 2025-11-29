//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        sum += 1;   // first term is 1

    for (i = 2; i <= n; i++) {
        float num = 2 * i - 1;
        float den = 2 * i;
        sum += num / den;
    }

    printf("Sum = %.4f\n", sum);

    return 0;
}