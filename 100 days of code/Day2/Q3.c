//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int Length,Breadth,area,perimeter;

    printf("Enter a value for Length: ");
    scanf("%d", &Length);

    printf("Enter a value for Breadth: ");
    scanf("%d", &Breadth);

    area = Length*Breadth;
    perimeter = 2*(Length+Breadth);

    printf("The area of rectangle is %d and the perimeter is %d.\n", area, perimeter);
    
}