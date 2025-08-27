//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){
    int a,b,sum,diff,prod,division;

    printf("enter the value of a: ");
    scanf("%d", &a);

    printf("enter the value of b: ");
    scanf("%d", &b);

    sum = a+b;
    diff = a-b;
    prod = a*b;
    division = a/b;

    printf("The sum of %d and %d is %d.\n", a,b,sum);
    printf("the difference of %d and %d is %d.\n", a,b,diff);
    printf("The product of %d and %d is %d.\n", a,b,diff);
    printf("The Quotient of %d and %d is %d.\n", a,b,division);
return 0;

}