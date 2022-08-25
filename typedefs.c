#include <stdio.h>

typedef struct person {
    char *fname;
    char *lname;
    char *sex;
    int age;
    int height;
    int weight;
} person;

typedef struct {
    char *name;
    char *location;
} animal;

int main(void) {
    person ryan = {.fname="Ryan", .lname="Gilland", .sex="Male", .age=27, .height=75, .weight=205};
    animal grizzly;
    grizzly.name = "Grizzly Bear";
    grizzly.location = "Alaska";

    printf("First Name:     %s\n", ryan.fname);
    printf("Last Name:      %s\n", ryan.lname);
    printf("Sex:            %s\n", ryan.sex);
    printf("Age:            %d\n", ryan.age);
    printf("Height:         %d\n", ryan.height);
    printf("Weight:         %d\n\n", ryan.weight);

    printf("Name:           %s\n", grizzly.name);
    printf("Location:       %s\n", grizzly.location);
}
