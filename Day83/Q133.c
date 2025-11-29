//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;

    for (m = JAN; m <= DEC; m++) {
        printf("Month %d: ", m);

        switch (m) {
            case JAN: case MAR: case MAY: case JUL:
            case AUG: case OCT: case NOV:
                printf("31 days\n");
                break;

            case APR: case JUN: case SEP:
                printf("30 days\n");
                break;

            case FEB:
                printf("28 days (29 in leap year)\n");
                break;
        }
    }

    return 0;
}