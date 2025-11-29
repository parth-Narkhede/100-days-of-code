//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, bin[32], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0");
        return 0;
    }

    while (num > 0) {
        bin[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary = ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    return 0;
}