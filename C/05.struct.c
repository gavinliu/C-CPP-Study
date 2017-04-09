#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct People {
    char* name;
    char country[20];
    int age;
};

struct Man {
    char name[20];
} m1 = {"Man"}, m2 = {"Man2"};

struct {
    char name[20];
} m3 = {"Man3"};

struct Class {
    struct People student;
};

int main(int argc, char const *argv[]) {
    // struct People gavin = {"Gavin", "China", 21}
    struct People gavin;
    strcpy(gavin.country, "China");
    gavin.name = "gavin";
    gavin.age = 21;

    printf("%s, %s, %d\n", gavin.name, gavin.country, gavin.age);

    struct People* p = &gavin;

    printf("%p\n", p);
    printf("%p\n", &gavin.name);
    printf("%p\n", &gavin.country);
    printf("%s - %s\n", (*p).name, p->name);

    printf("%s\n", m2.name);

    printf("%s\n", m3.name);

    struct Class cls;

    cls.student = gavin;

    printf("%s\n", cls.student.name);

    struct Man mans[] = {m1, m2};
    strcpy(m1.name, "name");

    for (size_t i = 0; i < 2; i++) {
        printf("%s\n", mans[i].name);
    }

    printf("%ld\n", sizeof(gavin));

    // 动态内存分配

    struct People* pp = malloc(sizeof(struct People) * 2);

    pp->name = "lala";

    printf("%s\n", pp->name);

    printf("%d\n", sizeof(*pp));

    return 0;
}
