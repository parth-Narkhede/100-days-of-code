//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[300], result[300], temp[100];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            temp[j] = str[i];
            j++;
        } else {
            temp[j] = '\0';
            for (k = j - 1; k >= 0; k--) {
                result[strlen(result)] = temp[k];
            }
            result[strlen(result)] = ' ';
            j = 0;
        }
        i++;
    }

    temp[j] = '\0';
    for (k = j - 1; k >= 0; k--) {
        result[strlen(result)] = temp[k];
    }
    result[strlen(result)] = '\0';

    printf("Output: %s\n", result);

    return 0;
}