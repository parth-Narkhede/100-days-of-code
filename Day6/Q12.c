//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){
    int n;
    printf("enter a value for n: ");
    scanf("%d", &n);

    if(n >= 0){
        if(n == 0){
            printf("the entered number is 0");
        }else{
            printf("the entered number is positive");
        }
    }
    if(n < 0){
        printf("the entered number is negative");
    }
    return 0;
}