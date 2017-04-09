#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void read() {
    char* path = "/Users/gavin/Workspace/C\\C++/C/09.io.c";
    FILE* f = fopen(path, "r");
    if (f == NULL) {
        return;
    }

    char buffer[50];
    while (fgets(buffer, 50, f)) {
        printf("%s", buffer);
    }
    fclose(f);
}

void write() {
    char* path = "/Users/gavin/Workspace/C\\C++/C/09.io.c.tmp";
    FILE* f = fopen(path, "w");

    fputs("Hello", f);

    fclose(f);
}

void copy() {
    char* path = "/Users/gavin/Downloads/i.png";
    char* path2 = "/Users/gavin/Downloads/x.png";
    FILE* rf = fopen(path, "rb");
    FILE* wf = fopen(path2, "wb");

    int buffer[50];
    int len = fread(buffer, sizeof(int), 50, rf);
    while (len > 0) {
        fwrite(buffer, sizeof(int), len, wf);
        len = fread(buffer, sizeof(int), 50, rf);
    }

    fclose(rf);
    fclose(wf);
}

int main(int argc, char const *argv[]) {

    // read();

    // write();

    // copy();

    printf("%d\n", ( 8 ^ 9));

    return 0;
}
