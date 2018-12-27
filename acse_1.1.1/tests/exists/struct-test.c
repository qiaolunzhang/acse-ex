#include <stdio.h>

struct A {
    int a;
    int b;
};

struct B {
    struct A a;
    int b;
};

struct B B = {{5, 3}, 2};

int main(int argc, char **argv) {
    printf("B.a: %d\n", B.a.a);
    return 0;
}
