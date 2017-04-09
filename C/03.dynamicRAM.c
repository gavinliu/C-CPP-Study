#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int arr[5] ={1,2,3,4,5};

    printf("%p\n", arr);

    printf("%p\n", &arr[0]);


    // int* p = malloc(100);
    //
    // p[0] = 100;
    // p[1] = 2;
    //
    // printf("%p\n", &p);
    //
    // printf("%p, %d, %p, %d\n", &p[0], p[0], &p[1], p[1]);
    //
    // int* p2 = realloc(p, 90);
    //
    // printf("%p\n", &p2);
    //
    // printf("%p, %d, %p, %d\n", &p2[0], p2[0], &p2[1], p2[1]);

    return 0;
}
