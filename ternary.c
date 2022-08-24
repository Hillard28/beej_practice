#include <stdio.h>

int main(void) {
    int y = 14;
    int x = 12;

    y += x > 10? 17: 37;
    
    x = 8;

    if (x > 10) {
        y += 16;
    }
    else {
        y+= 37;
    }
    
    printf("y = %d\n", y);
    printf("The number %d is %s.\n", y, y % 2 == 0? "even": "odd");
}
