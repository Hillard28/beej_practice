#include <stdio.h>

struct person {
    char *fname;
    char *lname;
    char *sex;
    int age;
    int height;
    int weight;
};

void lname_assign(struct person *p, char *lname) {
    p->lname = lname;
}

int main(void) {
    struct person ryan = {.fname="Ryan", .sex="Male", .age=27, .height=75, .weight=205};
    struct person evan;
    evan.fname = "Evan";
    evan.sex = "Male";
    evan.age = 25;
    evan.height = 73;
    evan.weight = 190;

    lname_assign(&ryan, "Gilland");
    lname_assign(&evan, "Gilland");

    printf("First Name:     %s\n", ryan.fname);
    printf("Last Name:      %s\n", ryan.lname);
    printf("Sex:            %s\n", ryan.sex);
    printf("Age:            %d\n", ryan.age);
    printf("Height:         %d\n", ryan.height);
    printf("Weight:         %d\n\n", ryan.weight);

    printf("First Name:     %s\n", evan.fname);
    printf("Last Name:      %s\n", evan.lname);
    printf("Sex:            %s\n", evan.sex);
    printf("Age:            %d\n", evan.age);
    printf("Height:         %d\n", evan.height);
    printf("Weight:         %d\n\n", evan.weight);

    if (ryan.lname == evan.lname)
    {
        printf("%s and %s are possibly related (share the same last name).\n", ryan.fname, evan.fname);
    }
}
