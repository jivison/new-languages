#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        // printf("%d\n", i);
    }
    
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int sum = 0;
    size_t numElements = sizeof(array) / sizeof(array[0]);

    for (i = 0; i < numElements; i++) {
        printf("%d\n", array[i]);
    }
    
    
    

}