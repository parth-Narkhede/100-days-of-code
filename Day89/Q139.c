//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    START = 5,
    RUNNING,
    STOPPED = 10,
    FINISHED
};

int main() {
    printf("START = %d\n", START);
    printf("RUNNING = %d\n", RUNNING);
    printf("STOPPED = %d\n", STOPPED);
    printf("FINISHED = %d\n", FINISHED);

    return 0;
}