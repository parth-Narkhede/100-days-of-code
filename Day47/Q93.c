//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[256] = {0}, freq2[256] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;

    while (str2[i] != '\0') {
        freq2[(unsigned char)str2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are anagrams\n");
    else
        printf("Strings are NOT anagrams\n");

    return 0;
}