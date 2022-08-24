#include <stdio.h>

int main(void) {
    int counter;
    int x=10, y, z;
    for (y=6, z=8; y < 11; y++, z++) {
        printf("x is %s y and z.\n", !(x < y) && x >= z? "greater than both": "not greater than both");
    }
}
