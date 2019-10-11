#include <stdio.h>

int main() {
    
    int a = 1;
    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    int b = 1;
    int * pointer_to_b = &b;

    // b = 2
    b += 1;

    // now b = 3
    *pointer_to_b += 1;

    // The "&" can be thought of as a packager
    // It bundles the variable into a pointer
    // The "*" then 'unpacks' that pointer into the value it points to
    // But doesn't sever the link between the unpacked value and the one in memory


}


