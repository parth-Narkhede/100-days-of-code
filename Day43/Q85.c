//Reverse a string.
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j = 0, len = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}