/**
* Task 24
 *
 * Two different functions for checking smallest and largest value
 * However, incredibly similar, therefore making singular function to check
*/

#include "stdio.h"      // printf, scanf

int getSmallestValue(const int n);
int getLargestValue(const int n);

enum Operation{
    FIND_SMALLEST,
    FIND_LARGEST
};

int getValue(const int n, enum Operation op);

int main(){
    int smallest,
        largest,
        antall;

    // Initializes range for smallest value in range n
    printf("Values for smallest: ");
    scanf("%d", &antall);

    // Calls function to check for smallest integer in range n
    smallest = getValue(antall, FIND_SMALLEST);
    printf("\nSmallest value: %d\n", smallest);

    printf("Values for largest: ");
    scanf("%d", &antall);

    largest = getValue(antall, FIND_LARGEST);
    printf("\nLargest value of integers entered: %d\n", largest);

    return 0;
}



/**
 * Function to find lowest integer in range entered
 *
 * @param n - integer to be returned
 */
int getSmallestValue(const int n){
    int a[n];

    printf("Enter an integer: ");
    scanf(" %i", &a[n]);

    for (int i = 1; i < n; i++){
        if (a[i] < a[n]){
            printf("Smallest value: %i\n", a[i]);
            break;
        } else {
            printf("Something.\n");
        }
    }
}

/**
 * Finding largest value in range
 *
 * @param n - The range being checked
 */
int getLargestValue(const int n){
    int b[n];

    printf("Enter range: ");
    scanf(" %i", &b[n]);

    for (int i = 0; i <= n; i++){
        if (b[n] > b[i]){
            printf("Largest value: %i\n", b[n]);
            break;
        } else {
            printf("Something.\n");
        }
    }
}


/**
 * Function to return smallest and largest value
 *
 * @param n - Amount of integers to be checked
 * @param Operation - Enum for smallest and largest value
 *
 * @return op - Smallest or Largest integer of n integers
 */
 int getValue(const int n, enum Operation op){
    int number;
    int smallestValue;
    int largestValue;

    switch(op){
        case FIND_SMALLEST:

            printf("\tNumber 1: \n");
            scanf("%d", &number);
            smallestValue = number;


            for (int i = 0; i < n - 1; i++){
                printf("\tNumber %i: \n", i+2);
                scanf("%i", &number);

                if (number < smallestValue){
                    smallestValue = number;
                }
            }

            return smallestValue;

        case FIND_LARGEST:

            printf("\tNumber 1: ");
            scanf("%i", &number);
            largestValue = number;


            for (int i = 0; i < n - 1; i++){
                printf("\tNumber %i: ", i+2);
                scanf("%i", &number);

                if (number > largestValue){
                    largestValue = number;
                }
            }

            return largestValue;
    }
 }
