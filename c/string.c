#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "John";
    // You can also specify a length
    char limitedName[5] = "John";
    // The reason this is 5 and not 4 is because of string terminator
    // It tells the compiler that it is the end of the string
    // We have to allow an extra space for that character

    // String formatting with "printf"

    char * fullname = "John Ivison";
    int age = 18;

    printf("%s is %d years old.\n", fullname, age);

    char * yetAnotherName = "John";
    printf("%d\n", strlen(yetAnotherName));

    // Comparison
    if (strncmp(name, "John", 4)) {
        printf("Hello, John!\n");
    }
    else {
        printf("You are not John, go away!\n");
    }

    // Concatenation
    char dest[20] = "Hello";
    char src[20] = "World";

    strncat(dest, src, 10);
    printf("%s\n", dest);
    

}