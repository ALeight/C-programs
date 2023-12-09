/**
* Task 20
 *
 * Input phonenumber - 8 digits
 *
 * Checks for allowed integers in interval 1-9. If integer is smaller or bigger,
 * program exits. This is not a finely tuned program.
 *
*/

#include "stdio.h"  // printf, scanf

#define MAX 8       ///< Phonenumber length

int main(){
    int a[MAX];
    int condMet = 0; // Flag for checking if condition is met

    for (int i = 0; i < MAX; i++){
        printf("Enter digit %i: ", i + 1);
        scanf(" %i", &a[i]);

        // Checking for allowed integers
        if (a[i] < 0 || a[i] > 9){
            printf("\nInput not type integer. Retry.");

            // In normal cases, if input was not accepted
            // i--; Reiterate

            // This instance is in case we just want to exit the program if invalid input
            i = MAX;

        } else {
            condMet = 1;
        }

    }

    if (condMet){
        // Outputs one digit at a time
        printf("\n\tPhone number: ");
        for (int i = 0; i < MAX; i++) {

            // Check if current digit is valid
            if (a[i] >= 0 && a[i] <= 9) {
                printf("%i", a[i]);

                // Print dash if not last digit
                if (i < MAX - 1) {
                    printf("-");
                }
            } else {
                // If invalid input entered, break the loop
                printf("\nInvalid input. Exiting program.\n");
                break;
            }
        }
    } else {
        printf("\nInput not accepted. Exiting program.");
    }


    return 0;
}
