//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    i = 0;
    j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}