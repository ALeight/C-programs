/**
* Task 17 GRPROG
 *
 * Calculating skaters score
 *
*/


#include "stdio.h"
#include "ctype.h"


const int FIVE       = 500; ///< For calculating number of 500 in scanned distance


int main(){
    int min, sec, hundreds,
        dist,
        numSkaters,
        number;
    float score;
    char choice;

    do {
        do {
            printf("\nEnter a distance (500, 1500, 3000, 5000): ");
            scanf(" %i", &dist);
        } while (dist != 500 && dist != 1500 && dist != 3000 && dist != 5000);

        printf("Valid distance of %i-meters.\n", dist);
        number = dist / FIVE; // Calculating for score later


        do {
            printf("\nHow many skaters in race, range 1-10: \n");
            scanf(" %i", &numSkaters);

            if (numSkaters < 1 || numSkaters > 10) {
                printf("Please enter in the available range, 1-10.\n ");
            }
        } while (numSkaters < 0 || numSkaters > 10);

        printf("Valid number of skaters: %i.\n", numSkaters);

        // Array for storing the individual skaters
        int skaters[numSkaters];

        // Input for each individual skater and calculation of scores
        for (int i = 1; i <= numSkaters; i++) {
            min = sec = hundreds = -1; // To ensure loop runs atleast once

            while (min < 0 || sec < 0 || hundreds < 0) {
                printf("\nEnter time for skater %i (min sec hundreds): \n", i);
                scanf(" %i %i %i", &min, &sec, &hundreds);

                if (min < 0 || sec < 0 || hundreds < 0) {
                    printf("Integers can only be positive.\n");
                }
            }

            // Score calculation
            score = (float) (min * 60 + sec + hundreds / 100) / (float) number;

        }

        // Printing the score of each individual skater
        for (int i = 0; i < numSkaters; i++) {
            printf("Skater %i score: %.2f\n", i + 1, score);
        }

        printf("Do you want to run the program again? (Y/n).\n");
        scanf(" %c", &choice);

        while (getchar() != '\n');

    // Make choice uppercase either way, for cleaner code
    } while (toupper(choice) == 'Y');

    printf("Program exited. Thank you for contributing.\n");

    return 0;
}