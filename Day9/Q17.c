//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){
    float D,root1, root2, a, b, c;
    
    printf("enter coefficient x^2: ");
    scanf("%f", &a);

    printf("enter coefficient of x: ");
    scanf("%f", &b);

    printf("enter coefficient of x^0: ");
    scanf("%f", &c);

    D = b*b - 4*a*c;
    
  if(a == 0){
    printf("The equation is not a quadratic equation\n");
  }else if(D > 0){
        root1 = (-b + pow(D, 0.5))/2*a;
        root2 = (-b - pow(D, 0.5))/2*a;
        printf("the quadratic equation has real and distinct roots.\n");
        printf("the first root is %f\n", root1);
        printf("the second root is %f\n", root2); 
    }else if(D == 0){
        root1 = -b/2*a;
        printf("The quadratic equation has real and equal roots.\n");
        printf("the roots are %f\n", root1);    
    }else{
        printf("The quadratic equation has imginary roots\n");
    }
    return 0;
}