#include <stdio.h>

void increment(int j) {
    j += 1;
}

void increment_p(int *j) {
    *j += 1;
}

int main(void) {
    int i = 36;
    int *p = &i;
    printf("i's value is %d and it's location is %p\n", i, p);
    i = 10;
    printf("The value of i is now %d\n", *p);
    increment_p(p); /*References i through pointer and so will increment*/
    printf("And now it's %d\n", i);
    increment(*p); /*Doesn't return a value so will not increment*/
    printf("And now it's %d\n", i);
    increment_p(&i); /*This works since we're passing i's pointer*/
    printf("And now it's %d\n", i);
}
