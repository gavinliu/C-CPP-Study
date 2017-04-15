#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union Value {
    int x;
    double y;
    char z;
    double q;
};


int main(int argc, char const *argv[]) {

    union Value v;

    v.x = 1;
    printf("%d, %f, %c, %f\n", v.x, v.y, v.z, v.q);

    v.z = 'A';
    printf("%d, %f, %c, %f\n", v.x, v.y, v.z, v.q);

    v.y = 0.1;
    printf("%d, %f, %c, %f\n", v.x, v.y, v.z, v.q);

    v.q = 0.2;
    printf("%d, %f, %c, %f\n", v.x, v.y, v.z, v.q);


    printf("%zu\n", sizeof(union Value));

    return 0;
}
