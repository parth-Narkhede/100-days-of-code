//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll;
    char name[100];
    float marks;

    printf("How many students? ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    printf("\nData saved to students.txt\n\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("---- Student Records ----\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s\nRoll: %d\nMarks: %.2f\n\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}