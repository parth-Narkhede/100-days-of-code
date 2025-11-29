//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender { MALE = 1, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (1 = MALE, 2 = FEMALE): ");
    scanf("%d", (int*)&p.gender);

    printf("\nName: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Invalid gender\n");

    return 0;
}