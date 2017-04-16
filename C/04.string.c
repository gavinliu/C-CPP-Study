#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char c[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", c);

    char c2[6] = {'H', 'e', 'l', 'l', 'o'};
    printf("%s\n", c2);

    char* str = "Hello World!";
    printf("%p\n", str);
    printf("%p: %c\n", &str[0], str[0]);
    while (*str) {
        printf("%c ", *str);
        str++;
    }
    printf("\n");

    char* str2 = "Hello World!";
    printf("%p: %s\n", &str2, str2);

    char* p = strchr(str2, 'W');

    printf("%p: %c | %ld\n", &p, *p, p - str2);

    const char* fn = "Gavin";
    const char* ln = " Liu";

    char src[50], dest[50];

    strcpy(src,  ln);
    strcpy(dest, fn);

    strcat(dest, src);

    printf("%s\n", dest);

    return 0;
}
