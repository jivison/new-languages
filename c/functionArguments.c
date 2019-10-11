#include <stdio.h>

void addone(int * n);
void dontaddone(int n);



int main() {
    int n;

    // This will add one, but not assign it to memory
    dontaddone(n);
    // This one will add one, and assign that new value to memory,
    // Where &n points to
    addone(&n);
    printf("%d\n", n);
}


void addone(int * n) {
    (*n)++;
}

void dontaddone(int n) {
    n++;
}