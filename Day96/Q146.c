//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;   // nested structure
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining_date.day,
                     &e.joining_date.month,
                     &e.joining_date.year);

    printf("\n----- Employee Details -----\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}