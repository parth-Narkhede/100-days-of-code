//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, lastStart = 0;

    printf("Enter full name: ");
    gets(name);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            lastStart = i + 1;
        }
        i++;
    }

    if (name[0] != ' ')
        printf("%c ", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (i == lastStart)
            break;
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c ", name[i + 1]);
        }
    }

    printf("%s\n", &name[lastStart]);

    return 0;
}