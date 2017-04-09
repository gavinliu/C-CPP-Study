#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union Value {
    int x;
    float y;
    char z;
};


int main(int argc, char const *argv[]) {

    union Value v;

    v.x = 1;
    v.y = 0.1;
    v.z = 'A';

    printf("%d, %f, %c\n", v.x, v.y, v.z);
    printf("%zu\n", sizeof(union Value));

    return 0;
}
