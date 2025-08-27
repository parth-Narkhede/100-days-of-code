//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
    int n,i, sum;
    sum = 0;

    printf("enter a value for n: ");
    scanf("%d", &n);

    if(n <=0){
        printf("please enter a natural value greater than 0 ");
    }

    for(i = 1; i<=n; i++){
       sum += i;
    }
    printf("the sum of all natural numbers till %d is %d.\n", n, sum);
    return 0;
}