#include <stdio.h>

int foo(int bar);

int main() {
    printf("%d\n", foo(10));
}

int foo(int bar) {
    return bar * 2;
}