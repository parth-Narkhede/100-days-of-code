//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){

    int fahrenheit, temperature;

    printf("enter a value for temperature in celsius: ");
    scanf("%d", &temperature);

    fahrenheit =(temperature * 9/5)+32;

    printf("the value of temeprature in fahrenheit is %d.\n", fahrenheit);
    return 0;

}