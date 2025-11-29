//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // Take employee input
    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e1.joining_date.day,
                     &e1.joining_date.month,
                     &e1.joining_date.year);

    // Write to binary file
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to employee.bin successfully.\n");

    // Read from binary file
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Print the read data
    printf("\n----- Employee Details (From File) -----\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Joining Date: %02d-%02d-%04d\n",
           e2.joining_date.day,
           e2.joining_date.month,
           e2.joining_date.year);

    return 0;
}