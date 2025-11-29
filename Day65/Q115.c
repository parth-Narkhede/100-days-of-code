//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>

int main() {
    char s[200], t[200];
    int freq[26] = {0};
    int i = 0;

    scanf("%s", s);
    scanf("%s", t);

    // Count frequencies in s
    while (s[i] != '\0') {
        freq[s[i] - 'a']++;
        i++;
    }

    // Count frequencies in t (subtract)
    i = 0;
    while (t[i] != '\0') {
        freq[t[i] - 'a']--;
        i++;
    }

    // Check if all are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}