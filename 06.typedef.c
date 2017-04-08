#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Age;

typedef int* AgeP;

struct Man {
    char* name;
};

typedef struct Man Student, *StudentP;

int main(int argc, char const *argv[]) {
    Age a = 1;
    printf("%d\n", a);

    AgeP p = &a;
    printf("%d\n", *p);

    Student student;
    student.name = "Jack";
    printf("%s\n", student.name);

    StudentP sp = &student;
    printf("%s\n", sp->name);

    return 0;
}
