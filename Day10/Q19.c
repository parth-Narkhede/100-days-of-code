//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){
    int a,b,c;

    printf("enter a value for side a: ");
    scanf("%d", &a);

    printf("enter a value for side b: ");
    scanf("%d", &b);

    printf("enter a value for side c: ");
    scanf("%d", &c);

    if(a==b && b==c){
    printf("the triangle is equilateral");
    }else if(a==b || b==c || a==c){
        printf("the triangle is isosceles");
    }else{
        printf("the triangle is scalene");
    }
return 0;
}
