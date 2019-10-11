#include <stdio.h>
#include <stdlib.h>


int main() {
    typedef struct {
        char * name;
        int age;
    } person;
    

    // Create a pointer myperson which points a place in memory
    person * myperson = malloc(sizeof(person));

    // Add data to that place in memory
    myperson->name = "John";
    myperson->age = 27;

    // This frees (deletes) all the data which the pointer points to
    // Meaning the pointer myperson still exitsts,
    // but we can't access its data
    free(myperson);
}
