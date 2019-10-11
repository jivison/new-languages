#include <stdio.h>

int main() {
    int foo = 1;
    int bar = 2;
    
    if (foo < bar) {
        printf("foo is smaller than bar");
    } else if (foo == bar) {
        printf("foo and bar are equal");
    } else {
        printf("foo is larger than bar");
    }

    // Logical operators:
    foo || bar;
    foo && bar;
    foo != bar;
}