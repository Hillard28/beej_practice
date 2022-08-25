#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int strilen(char *s)
{
    char *p = s;

    while (*p != '\0')
        p++;
    
    return p - s;
}

void *memcopy(void *dest, void *src, int byte_count)
{
    char *s = src;
    char *d = dest;

    while (byte_count--) {
        *d++ = *s++;
    }

    return dest;
}

int cmp_int(const void *va, const void *vb)
{
  int a = *(int*)va;
  int b = *(int*)vb;
  return a < b ? -1 : a > b ? +1 : 0;
}

int main(void)
{
    int a[] = {11, 22, 33, 44, 55};
    int *p = a;
    char s[] = "Antelopes";
    char *t = "Wombats";
    char g[] = "Goats!";
    char h[100];
    int j[] = {1, 2, 3};
    int k[3];
    int sortee[] = {8, 5, 7, 1, 3, 2, 4};

    printf("String length: %d\n", strilen("Hello, world!"));

    //The equivalent are all equivalent for looping through an array
    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(a + i));
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p++));
    
    printf("String length: %d\n", strilen(s));
    printf("String length: %d\n", strilen(t));

    memcpy(h, g, 7);
    printf("%s\n", h);

    memcopy(k, j, 3 * sizeof(int));
    printf("%d, %d, %d\n", k[0], k[1], k[2]);

    qsort(sortee, sizeof(sortee)/sizeof(sortee[0]), sizeof(sortee[0]), cmp_int);
    for (int i = 0; i < sizeof(sortee)/sizeof(sortee[0]); i++) {
        printf("%d\n", sortee[i]);
    }
}
