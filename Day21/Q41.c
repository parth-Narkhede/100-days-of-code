//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, first, last, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    int middle = (num % power) / 10;
    int newNum = last * power + middle * 10 + first;

    printf("Number after swapping = %d\n", newNum);

    return 0;
}