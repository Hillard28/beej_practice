#include <stdio.h>

int strilen(char *s) {
    int count = 0;
    while (s[count] != '\0') {
        count ++;
    }
    return count;
}

int main(void) {
    int i, len1, len2;
    char *s = "Hello World!";
    char s2[] = "Jello again!";
    len1 = strilen(s);
    len2 = strilen(s2);
    printf("%s\n", s);
    for (i = 0; i < len1; i++) {
        printf("%c\n", s[i]);
    }

    printf("Editable strings should be initialized with []\n");
    printf("%s\n", s2);
    s2[0] = 'H';
    printf("%s\n", s2);
    printf("This string is %d characters long.\n", len2);
}
