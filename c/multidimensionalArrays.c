#include <stdio.h>

int main() {
    // type arrayName [x][y];
    char vowels[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };
    
    int a[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
    // In this case the sub-braces are just for visual pruposes
    // So the above would be equivalent to:
    int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

}