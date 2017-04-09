#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Type {
    Open,
    Close
};

typedef enum Type Type;

int main(int argc, char const *argv[]) {
    Type t = Open;

    printf("%d\n", t);

    printf("%zu\n", sizeof(t));

    return 0;
}
