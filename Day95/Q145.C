//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to return the top student
struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // return structure
}

int main() {
    struct Student s[5], topper;

    // Input 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    topper = getTopStudent(s, 5);

    printf("\n----- Top Student -----\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}