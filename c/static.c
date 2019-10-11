#include <stdio.h>

static void fun(void);

int runner() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    printf("%d\n", runner());
    printf("%d\n", runner());

    fun();

    return 0;
}

static void fun(void) {
    printf("I am a static function.\n");
}