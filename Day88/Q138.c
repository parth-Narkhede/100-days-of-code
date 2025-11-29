//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() {
    enum Color c;

    const char *names[] = {
        "RED", "GREEN", "BLUE", "YELLOW", "ORANGE"
    };

    for (c = RED; c <= ORANGE; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}