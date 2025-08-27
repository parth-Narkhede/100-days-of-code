//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &inputSeconds);

    hours = inputSeconds / 3600;
    inputSeconds = inputSeconds % 3600;
    minutes = inputSeconds / 60;
    seconds = inputSeconds % 60;

    printf("Time is %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}