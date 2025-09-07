//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main(){
    int a,b,c;

    printf("enter a value for a:");
    scanf("%d", &a);

    printf("enter a value for b: ");
    scanf("%d", &b);

    printf("enter a value for c: ");
    scanf("%d", &c);
   
    if(a > b && a > c){
        printf("%d is the greatest number among %d, %d, %d.", a, a,b,c);
    }else if(b>a && b>c){
        printf("%d is the greatest number among %d, %d, %d.", b, a,b,c);
    }else if(c>a && c>b){
        printf("%d is the greatest number among %d, %d, %d.", c, a,b,c);
    }else{
        printf("error");
    }
return 0;
}