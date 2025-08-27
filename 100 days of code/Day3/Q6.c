//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number a: ");
    scanf("%d", &a);

    printf("Enter the second number b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    printf("After swapping: a = %d, b = %d\n", b,a);

    return 0;
}