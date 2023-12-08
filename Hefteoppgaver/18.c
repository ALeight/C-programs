/**
* Task 18
 *
 * Print numbers 1 through 100
 * This task is all about the beauty of the output
 *
 * @author Bendik S. Kristoffersen
*/

#include "stdio.h"


int main() {

    // Creating the initial loop

    for (int j = 1; j <= 100; j++){

      printf("\t%i", j);
    // If divisible by 2, even number
      if(j % 2 == 0){
      printf("\tEven Number.\n");
    // Else has to be odd
    } else {
          printf("\t Odd Number.\n");
     }
    }

    // Now with five numbers at each output
    for (int i = 1; i <= 100; i++) {
        // %4i to ensure each number printed with a width of 4
        printf(" %4i ", i);

        // Same logic as before with odd and even numbers
        if (i % 2 == 0){
            printf(" Even ");
        } else {
            printf(" Odd ");
        }

        // Checks if divisible by 5, we add newline so output is 5 and 5 integers
        if (i % 5 == 0){
            printf("\n");
        }
    }

    return 0;
}