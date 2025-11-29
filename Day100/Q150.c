//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void update(struct Student *p) {
    printf("Enter new name: ");
    scanf("%s", p->name);
    printf("Enter new roll number: ");
    scanf("%d", &p->roll_no);
    printf("Enter new marks: ");
    scanf("%f", &p->marks);
}

void display(struct Student *p) {
    printf("\nName: %s\n", p->name);
    printf("Roll No: %d\n", p->roll_no);
    printf("Marks: %.2f\n", p->marks);
}

int main() {
    struct Student s;
    update(&s);
    display(&s);
    return 0;
}