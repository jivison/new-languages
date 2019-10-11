#include <stdio.h>

int num;

void generateSquare(int number) {
    // Loops from twice the number minus one to the number itself
    // For example, with 5, it will be [9, 8, 7, 6, 5]
    for (int numRows = 2 * number - 1; numRows >= number; numRows--)
    {
        for (int numCols = 0; numCols < number; numCols++)
        {
            printf("%d ", numRows - numCols);
        }
        printf("\n");
    }
}

int main() {
    // Get valid argument
    while (1)
    {
        // If the user enters a non number input, this will infinite loop
        // Essentially, the scanf won't try to take input again due to C
        // shenanigans 😢
        printf("Please enter a number: ");
        scanf("%d", &num);
        if (num > 0 && num <= 14)
        {
            // Break the loop if the number is valid
            break;
        } else {
            // -_-
            printf("That is not a valid number. Please enter a new one...\n");
        }
    }
    
    // Generate square
    generateSquare(num);
}


    