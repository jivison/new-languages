#include <stdio.h>
#include <stdlib.h>

int main() {
    // char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    // char *pvowels = &vowels;
    // int i;

    // // Print the addresses
    // for (i = 0; i < 5; i++) {
    //     printf("&vowels[%d]: %u, pvowels + %d: %u, vowels + %d: %u\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    // }

    // // Print the values
    // for (i = 0; i < 5; i++) {
    //     printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    // }

    int n = 5;
    // malloc = Memory ALLOCate
    // So this makes space for 5 chars in memory
    char *pvowels = (char *) malloc(n * sizeof(char));
    int i;

    pvowels[0] = 'A';
    pvowels[1] = 'E';
    // *(pvowels + 2) = "I"
    // The above is the same as bellow
    pvowels[2] = 'I';
    pvowels[3] = 'O';
    pvowels[4] = 'U';

    for (i = 0; i < n; i++) {
        printf("%c", pvowels[i]);
    }

    printf("\n");

    free(pvowels);

}