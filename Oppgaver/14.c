#include <stdio.h> // printf, scanf

/**
* Task 14
 *
 * Asks user for positive integers
 * If input is equal or small than 0, program stops running.
 * Return total integers read and the average of those integers.
*/

int main() {
    int number, totalSum = 0, count = 0;

    printf("Enter positive numbers. Enter 0 or a negative number to stop.\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%i", &number);

        if (number <= 0) {
            break; // Exit program if non-positive integer is inputted
        }

        totalSum += number;
        count++;
    }

    if (count > 0) {
        float average = (float)totalSum / count;

        printf("\nAverage: %.2f", average);
        printf("\nTotal sum: %i", totalSum);
        printf("\nNumber of values entered: %i", count);
    } else {
        printf("\nNo positive numbers were entered.");
    }

    return 0;
}
