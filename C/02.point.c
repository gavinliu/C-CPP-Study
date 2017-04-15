
#include <stdio.h>
#include <stdlib.h>


void print(char const * str) {
    printf("%s\n", str);
}

void sayHi(void (*p)(char const * str)) {
    (*p)("hi");
    p("hi2");
}

int main(int argc, char const *argv[]) {

    // 定义一个 int类型的变量 i 值为5
    int i = 5;
    // &i 中的 &为取地址符，可以得到 i 的地址，%x 为十六进制输出
    printf("i的地址 %p\n",&i);

    // 指针变量 定义一个int* 类型的变量p
    int* p;
    // 把 i 的地址给 p，现在 p 就存放的 i 的地址
    p = &i;

    printf("i=%d\n",i);
    // *p --> 当指针变量前面有*的时候，表示取这个指针变量所存放的地址里面对应的数据
    printf("*p的值%d\n",*p);

    sayHi(print);

    return 0;
}
