#include <stdio.h>

int main(void) {
    int age;

    printf("How old are you: ");
    scanf("%d", &age);

    switch (age) {
        case 0:
            printf("Damn you're young!\n");
            break;
        case 10:
            printf("Wow, ten years old!\n");
            break;
        default:
            printf("There's nothing special about you\n");
            break;
    }
}
