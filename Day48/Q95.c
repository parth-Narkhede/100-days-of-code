//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[201], s2[201], temp[402];
    int len1, len2;

    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    s2[strcspn(s2, "\n")] = '\0';

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not a rotation\n");

    return 0;
}