#include <stdio.h>

int main(void) {
    int x = 9;
    if (x == 10) {
        printf("x is 10\n");
    }
    else {
        printf("You suck at guessing.\n");
    }
    while (x < 15) {
        printf("Is this your card?\n");
        x += 1;
    }
    for (x = 15; x < 20; x++) {
        printf("How about now?\n");
    }
}
