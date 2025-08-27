//Q4: Write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main(){

    float radius, area, circumference;

    printf("enter a value for radius: ");
    scanf("%f", &radius);

    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;

    printf("The area of circle is %d and the circumference %d.\n", area,circumference);

    return 0;
}