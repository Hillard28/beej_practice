#include <stdio.h>

int main(void)
{
    FILE *fp;
    int c;
    char s[1024];
    int linecount = 0;
    int mass;
    float length;
    char name[1024];

    //Read characters from hello.txt a char at a time
    fp = fopen("hello.txt", "r");

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    printf("\n\n");
    fclose(fp);

    //Read a quote from quote.txt a line at a time
    fp = fopen("quote.txt", "r");
    
    while (fgets(s, sizeof s, fp) != NULL)
        printf("%d: %s", ++linecount, s);
    
    printf("\n\n");
    fclose(fp);

    //Read formatted input using fscanf
    fp = fopen("whales.txt", "r");

    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
        printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);
    
    fclose(fp);
}
