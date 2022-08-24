#include <stdio.h>

int main(void) {
    int a = 99999;

    printf("Size of a, %zu\n", sizeof(a));
    printf("Size of an int, %zu\n", sizeof(int));
    printf("Size of a char, %zu\n", sizeof(char));
    printf("Size of a float, %zu\n", sizeof(float));
}
