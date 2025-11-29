//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num /= 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}